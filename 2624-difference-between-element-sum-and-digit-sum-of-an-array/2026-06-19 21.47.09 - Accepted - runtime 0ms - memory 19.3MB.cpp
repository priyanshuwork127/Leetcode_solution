class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int rem;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int sumd=0;
        for(int i=0;i<n;i++){
            int num=nums[i];
            while(num>0){
                rem=num%10;
                sumd+=rem;
                num/=10;
            }
        }
        return abs(sumd-sum);
    }
};