class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(n>nums[j]){
                    c++;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};