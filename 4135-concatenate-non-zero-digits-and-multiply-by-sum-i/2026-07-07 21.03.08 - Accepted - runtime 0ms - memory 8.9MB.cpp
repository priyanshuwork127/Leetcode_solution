class Solution {
public:
    long long sumAndMultiply(int n) {
        long long temp=n;
        long long no=0;
        while(temp>0){
            long long rem=temp%10;
            if(rem!=0){
                no=no*10+rem;
            }
            temp/=10;
        }
        long long temp1=n;
        long long no1=0;
        long long sum=0;
        while(no>0){
            long long rem1=no%10;
            no1=no1*10+rem1;
            sum+=rem1;
            no/=10;
        }
        return no1*sum;
    }
};