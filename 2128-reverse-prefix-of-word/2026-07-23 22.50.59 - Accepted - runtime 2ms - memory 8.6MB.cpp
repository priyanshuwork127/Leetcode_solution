class Solution {
public:
    string reversePrefix(string word, char ch) {
        int a=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                a=i;
                break;
            }
        }
        string s=word.substr(0,a+1);
        string ss=word.substr(a+1,word.size()-a-1);
        stack<char> st;
        for(char c:s){
            st.push(c);
        }
        string ans="";
        while(!st.empty()){
            char v=st.top();
            st.pop();
            ans+=v;
        }

        ans+=ss;
        return ans;
    }
};