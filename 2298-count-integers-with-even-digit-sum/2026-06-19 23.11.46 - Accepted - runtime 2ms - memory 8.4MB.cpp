class Solution {
public:
    int countEven(int num) {
        vector<int> arr;
        for(int i=1;i<=num;i++){
            int sum=0;
            int temp=i;
            while(temp>0){
                int rem=temp%10;
                temp=temp/10;
                sum+=rem;
            }
            if(sum%2==0){
                arr.push_back(i);
            }
        }
        int siz=arr.size();
        return siz;
    }
};