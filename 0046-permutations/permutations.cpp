class Solution {
public:
    void permu(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,vector<bool> visited){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(nums[i]);
                permu(nums,ans,temp,visited);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> visited(nums.size(),0);
        vector<vector<int>> ans;
        vector<int> temp;
        permu(nums,ans,temp,visited);
        return ans;
    }
};