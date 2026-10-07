class Solution {
public:
    int countDigits(int num) {
        int orig=num;
        int s=0;
        while(num>0){
            int d=num%10;
            if(orig%d==0){
                s+=1;
            }
            num/=10;
        }
        return s;
    }
};