class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;

        for(char c:s){
            if(c!='#'){
            s1.push(c);}
            else{
                if(s1.size()!=0){
                    s1.pop();
                }
            }
        }
        for(char c1:t){
            if(c1!='#'){
            s2.push(c1);}
            else{
                if(s2.size()!=0){
                    s2.pop();
                }
            }
        }
        if(s1==s2){
            return true;
        }
        return false;
    }
};