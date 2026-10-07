class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=0;
        long long f=0;
        long long s=0;
        long long a=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                ans=gcd(nums[i],nums[j]);
                long long  s=ans*ans;
                long long m=1LL *nums[i]*nums[j];
                
                a=max((m/s),a);
            }
        }
        return a;
    }
};