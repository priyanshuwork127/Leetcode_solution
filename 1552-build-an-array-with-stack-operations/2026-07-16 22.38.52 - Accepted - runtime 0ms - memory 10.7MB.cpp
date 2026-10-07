class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int top=0;
        vector<string> ans;
        for(int i=1;i<=n && top<target.size();i++){
            if(target[top]==i){
                ans.push_back("Push");
                top++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};