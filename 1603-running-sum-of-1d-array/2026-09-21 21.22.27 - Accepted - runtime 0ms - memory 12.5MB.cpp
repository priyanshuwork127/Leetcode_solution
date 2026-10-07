class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int prefix=nums[0];
        vector<int> ans;
        ans.push_back(prefix);
        for(int i=1;i<nums.size();i++){
            ans.push_back(ans[i-1]+nums[i]);
            // ans.push_back(prefix[i]);
        }
        return ans;
    }
};