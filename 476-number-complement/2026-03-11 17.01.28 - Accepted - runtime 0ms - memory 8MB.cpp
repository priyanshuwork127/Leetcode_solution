class Solution {
public:
    int findComplement(int num) {
        if(num==0){
            return 1;
        }
        int s=0;
        int temp=num;
        while(num>0){
            s++;
            num/=2;
        }
        long long t=((1LL<<s)-1)-temp;
        return t;
    }
};