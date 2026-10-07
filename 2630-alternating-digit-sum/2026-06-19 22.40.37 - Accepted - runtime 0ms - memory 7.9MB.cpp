class Solution {
public:
    int alternateDigitSum(int n) {
        int temp=n;
        int rev=0;
        while(temp>0){
            int rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        vector<int> digits;
        int sum=0;
        while(rev>0){
            int rem1=rev%10;
            digits.push_back(rem1);
            rev=rev/10;
        }
        int size=digits.size();
        for(int i=0;i<size;i++){
            if(i%2!=0){
                sum+=-(digits[i]);
            }
            else{
                sum+=digits[i];
            }
        }
        return sum;
    }
};