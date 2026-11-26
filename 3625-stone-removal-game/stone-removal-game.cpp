class Solution {
public:
    bool canAliceWin(int n) {
        int t=0;
        int take=10;
        while(n>=take){
            n-=take;
            take--;
            t++;
        }
        return t%2==1;
    }
};