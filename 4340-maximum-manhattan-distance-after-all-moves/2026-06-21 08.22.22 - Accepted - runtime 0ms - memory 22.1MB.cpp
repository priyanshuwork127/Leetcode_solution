class Solution {
public:
    int maxDistance(string moves) {
        int x=0;
        int y=0;
        int wild=0;
        for(char c:moves){
            if(c=='U'){
                x++;
            }
            else if(c=='D'){
                x--;
            }
            else if(c=='L'){
                y--;
            }
            else if(c=='R'){
                y++;
            }
            else{
                wild++;
            }
        }
        return abs(x)+abs(y)+abs(wild);
    }
};