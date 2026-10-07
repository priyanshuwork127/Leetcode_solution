class Solution {
public:
    int maxDepth(string s) {
        int ma=0;
        int count=0;
        for(char c:s){
            if(c=='('){
                count++;
                ma=max(ma,count);
            }
            else if (c==')'){
                count--;
            }
        }
        return ma;
    }
};