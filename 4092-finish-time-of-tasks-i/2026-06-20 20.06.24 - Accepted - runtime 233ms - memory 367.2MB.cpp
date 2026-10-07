class Solution {
public:
    vector<vector<int>> adj;
    vector<long long> dp;

    long long dfs(int node, int parent, vector<int>& baseTime) {
        long long earliest = LLONG_MAX;
        long long latest = LLONG_MIN;

        bool isLeaf = true;

        for (int nei : adj[node]) {
            if (nei == parent) continue;

            isLeaf = false;
            long long childTime = dfs(nei, node, baseTime);

            earliest = min(earliest, childTime);
            latest = max(latest, childTime);
        }

        // leaf node
        if (isLeaf) {
            return baseTime[node];
        }

        long long ownDuration = (latest - earliest) + baseTime[node];
        return latest + ownDuration;
    }

    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        vector<vector<int>> torqavemi = edges; // required

        adj.assign(n, {});

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
        }

        return dfs(0, -1, baseTime);
    }
};