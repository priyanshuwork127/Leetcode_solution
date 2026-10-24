class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int i = -1;
        int j = -1;
        int k = -1;
        for (int x = 0; x < nums.size(); x++) {
            if (nums[x] >= minK) {
                i=x;
            }
            if (nums[x] <= maxK) {
                j=x;
            }
            if (nums[x] < minK || nums[x] > maxK) {
                k = x;
            }
            ans += max(0, (min(i, j) - k));
        }
        return ans;
    }
};