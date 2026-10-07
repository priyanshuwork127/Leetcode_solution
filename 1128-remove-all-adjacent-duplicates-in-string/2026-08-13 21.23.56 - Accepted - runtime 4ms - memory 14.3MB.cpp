class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char c:s){
            if(!st.empty() && st.top()==c){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        string s1;
        while(!st.empty()){
            s1.push_back(st.top());
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};