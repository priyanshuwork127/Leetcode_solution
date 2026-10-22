class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c:tokens){
            if(c!="+" && c!="-" && c!="*" && c!="/"){
                st.push(stoi(c));
            }
            else{
                int f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                if(c=="+"){
                    st.push(f+s);
                }
                else if(c=="-"){
                    st.push(s-f);
                }
                else if(c=="*"){
                    st.push(s*f);
                }
                else{
                    st.push(s/f);
                }
            }

        }
        return st.top();
    }
};