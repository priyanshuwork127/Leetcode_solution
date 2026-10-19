class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(char c:s){
            if(c=='('){
                st.push(0);
            }
            else if(c==')'){
                    int a=st.top();
                    st.pop();
                if(a==0){
                    st.top()+=1;
                }
                else if(a!=0){
                    st.top()+=a*2;
                }
            }
        }
        return st.top();
    }
};