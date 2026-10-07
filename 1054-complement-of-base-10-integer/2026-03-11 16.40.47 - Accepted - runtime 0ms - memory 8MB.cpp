class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int s=0;
        int temp=n;
        while(n>0){
            s++;
            n/=2;
        }
        return ((1<<s)-1)-temp;
        
    }
};