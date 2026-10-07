class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c:tokens){
            if(c!="+" && c!="-" && c!="*" && c!="/"){
                st.push(stoi(c));
            }
            else{
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                if(c=="+"){
                    st.push(first+second);
                }
                else if(c=="-"){
                    st.push(second-first);
                }
                else if(c=="*"){
                    st.push(second*first);
                }
                else if(first!=0 && c=="/"){
                    st.push(second/first);
                }
            }
        }
        return st.top();
    }
};