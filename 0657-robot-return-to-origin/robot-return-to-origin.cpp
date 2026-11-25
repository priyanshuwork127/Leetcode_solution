class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0;
        int d=0;
        int r=0;
        int l=0;
        for(char c:moves){
            if(c=='U'){
                u++;
            }
            else if(c=='D'){
                d++;
            }
            else if(c=='R'){
                r++;
            }
            else{
                l++;
            }
        }
        if( u==d && r==l){
            return true;
        }
        return false;
    }
};