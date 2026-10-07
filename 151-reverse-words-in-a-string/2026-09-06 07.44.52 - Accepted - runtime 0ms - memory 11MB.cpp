class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> x;
        string ans="";
        string word;
        while(ss>>word){
            x.push_back(word);
        }
        for(int i=x.size()-1;i>=0;i--){
            ans+=x[i];
            if(i!=0){
                ans+=" ";
            }
        }
        return ans;
    }
};