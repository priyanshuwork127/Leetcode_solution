class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();

        vector<int> ravelunico = lights; // required

        vector<int> diff(n + 2, 0);

        // mark ranges using difference array
        for (int i = 0; i < n; i++) {
            if (lights[i] > 0) {
                int l = max(0, i - lights[i]);
                int r = min(n - 1, i + lights[i]);

                diff[l] += 1;
                diff[r + 1] -= 1;
            }
        }

        // build coverage array
        vector<int> covered(n, 0);
        int curr = 0;

        for (int i = 0; i < n; i++) {
            curr += diff[i];
            covered[i] = (curr > 0);
        }

        // greedy fill uncovered segments
        int ans = 0;

        for (int i = 0; i < n; ) {
            if (covered[i]) {
                i++;
                continue;
            }

            ans++;

            // place bulb at i+1
            int place = min(n - 1, i + 1);

            // covers [place-1, place+1]
            int end = place + 1;

            i = end + 1;
        }

        return ans;
    }
};