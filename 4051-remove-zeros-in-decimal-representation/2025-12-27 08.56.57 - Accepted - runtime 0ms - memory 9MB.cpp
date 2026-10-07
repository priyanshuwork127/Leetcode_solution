class Solution {
public:
    long long removeZeros(long long n) {
        long long orig=n;
        long long ne=0;
        long long rev=0;
        while(n>0){
            int m=n%10;
            if(m!=0){
                ne=ne*10+m;
            }
            n/=10;
        }
        while(ne>0){
            int s=ne%10;
            rev=rev*10+s;
            ne=ne/10;
        }
        return rev;

    }
};