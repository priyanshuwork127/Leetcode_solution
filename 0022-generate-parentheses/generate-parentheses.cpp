class Solution {
public:
    void parenthesis(vector<string>& ans,int n,int left,int right,string& temp){
        if(left==n && right==n){
            ans.push_back(temp);
            return;
        }
        if(left<n){
            temp.push_back('(');
            parenthesis(ans,n,left+1,right,temp);
            temp.pop_back();
        }
        if(right<left){
            temp.push_back(')');
            parenthesis(ans,n,left,right+1,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp="";
        parenthesis(ans,n,0,0,temp);
        return ans;
    }
};