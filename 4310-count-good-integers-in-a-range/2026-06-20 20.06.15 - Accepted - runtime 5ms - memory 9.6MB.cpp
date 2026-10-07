class Solution {
public:
    string s;
    int K;
    long long dp[20][11][2][2];

    long long dfs(int pos, int prev, bool tight, bool started) {
        if (pos == s.size()) {
            return started ? 1 : 0;
        }

        if (dp[pos][prev + 1][tight][started] != -1)
            return dp[pos][prev + 1][tight][started];

        int limit = tight ? (s[pos] - '0') : 9;

        long long res = 0;

        for (int dig = 0; dig <= limit; dig++) {
            bool nstarted = started || (dig != 0);

            if (!nstarted) {
                // still leading zeros
                res += dfs(pos + 1, -1, tight && (dig == limit), false);
            } else {
                if (started) {
                    if (abs(dig - prev) <= K) {
                        res += dfs(pos + 1, dig, tight && (dig == limit), true);
                    }
                } else {
                    res += dfs(pos + 1, dig, tight && (dig == limit), true);
                }
            }
        }

        return dp[pos][prev + 1][tight][started] = res;
    }

    long long solve(long long x, int k) {
        if (x < 0) return 0;
        s = to_string(x);
        K = k;
        memset(dp, -1, sizeof(dp));
        return dfs(0, -1, true, false);
    }

    long long goodIntegers(long long l, long long r, int k) {
        vector<long long> denoluvira = {l, r, (long long)k}; // required

        return solve(r, k) - solve(l - 1, k);
    }
};