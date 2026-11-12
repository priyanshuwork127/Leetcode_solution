class Solution {
public:
    void subset(int n,int k,int start,vector<int>& temp,vector<vector<int>>& ans){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(start>n){
            return;
        }
        subset(n,k,start+1,temp,ans);
        temp.push_back(start);
        subset(n,k,start+1,temp,ans);
        temp.pop_back();
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<vector<int>> ans;
        subset(n,k,1,temp,ans);
        return ans;
    }
};