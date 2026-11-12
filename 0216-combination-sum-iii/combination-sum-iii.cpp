class Solution {
public:
    void comb(int k,int start,vector<vector<int>>& ans,vector<int>& temp,int sum,int target){
        if(temp.size()==k && sum==target){
            ans.push_back(temp);
            return;
        }
        if(start>9){
            return;
        }
        
        if(sum>target){
            return;
        }
        comb(k,start+1,ans,temp,sum,target);
        temp.push_back(start);
        comb(k,start+1,ans,temp,sum+start,target);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        comb(k,1,ans,temp,0,n);
        return ans;
    }
}; 