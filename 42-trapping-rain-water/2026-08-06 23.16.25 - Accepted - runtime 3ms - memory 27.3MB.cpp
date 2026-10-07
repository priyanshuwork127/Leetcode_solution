class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> left_max(n);
        vector<int> right_max(n);

        left_max[0] = 0;
        right_max[n - 1] = 0;

        for (int i = 1; i < n; i++) {
            left_max[i] = max(left_max[i - 1], height[i - 1]);
        }

        for (int i = n - 2; i >= 0; i--) {
            right_max[i] = max(right_max[i + 1], height[i + 1]);
        }

        int water = 0;

        for (int i = 0; i < n; i++) {
            int minHeight = min(left_max[i], right_max[i]);
            if (minHeight > height[i]) {
                water += minHeight - height[i];
            }
        }

        return water;
    }
};