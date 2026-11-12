class Solution {
public:
    void combination(vector<int>& nums,int target,vector<int>& temp,vector<vector<int>>& ans,int sum,int index){
        if(index==nums.size()){
            return;
        }
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(sum>target){
            return;
        }
        combination(nums,target,temp,ans,sum,index+1);
        temp.push_back(nums[index]);
        combination(nums,target,temp,ans,sum+nums[index],index);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        combination(candidates,target,temp,ans,0,0);
        return ans;
    }
};