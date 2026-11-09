class Solution {
public:
    bool found(vector<int> val,vector<vector<int>>& ans){
        for(int i=0;i<ans.size();i++){
            if(val==ans[i]){
                return true;
            }
        }
            return false;
    }
    void subs(vector<int>& nums,int index,int n,vector<vector<int>>& ans,vector<int> temp){
        if(index==n){
            if(!found(temp,ans)){
            ans.push_back(temp);}
            return;
        }
        subs(nums,index+1,n,ans,temp);
        temp.push_back(nums[index]);
        subs(nums,index+1,n,ans,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<int> temp;
        subs(nums,0,n,ans,temp);
        return ans;
    }
};