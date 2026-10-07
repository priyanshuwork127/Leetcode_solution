class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        int n=s.size();
        int j=0;
        for(int i=0;i<n;i++){
            s[i]=st.top();
            st.pop();
        }

    }
};