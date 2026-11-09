class Solution {
public:
    void subs(vector<int>& nums,int index,int n,vector<vector<int>>& ans,vector<int> temp){
        if(index==n){
            ans.push_back(temp);
            return;
        }
        subs(nums,index+1,n,ans,temp);
        temp.push_back(nums[index]);
        subs(nums,index+1,n,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        vector<int> temp;
        subs(nums,0,n,ans,temp);
        return ans;
    }
};