class Solution {
public:
    int minInsertions(string s) {
        int need,ans;
        need=0;
        ans=0;
        for(char c:s){
            if(c=='('){
                need+=2;
                if(need%2!=0){
                    ans++;
                    need--;
                }
            }
            else{
                need--;
                if(need<0){
                    ans++;
                    need=1;
                }
            }
        }
        return need+ans;
    }
};