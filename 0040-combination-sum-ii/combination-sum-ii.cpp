class Solution {
public:
    void combination(vector<int>& nums,int target,vector<int>& temp,vector<vector<int>>& ans,int sum,int index){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(index==nums.size()){
            return;
        }
        if(sum>target){
            return;
        }
        int next=index+1;
        while(next<nums.size() && nums[next]==nums[index]){
            next++;
        }
        combination(nums,target,temp,ans,sum,next);
        temp.push_back(nums[index]);
        combination(nums,target,temp,ans,sum+nums[index],index+1);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        combination(candidates,target,temp,ans,0,0);
        return ans;
    }
};