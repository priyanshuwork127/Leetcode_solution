class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0;
        for(char c:s){
            int val=c-'a'+1;
            while(val>0){
                sum+=val%10;
                val=val/10;
            }
        }
        k--;
        while(k>0){
            int sum2=0;
            while(sum>0){
                sum2+=sum%10;
                sum=sum/10;
            }
            sum=sum2;
            k--;
        }
        return sum;
    }
};