class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0;
        int orig=n;
        int m;
        while(n>0){
            m=n%10;
            rev=rev*10+m;
            n/=10;
        }
        return abs(orig-rev);
    }
};