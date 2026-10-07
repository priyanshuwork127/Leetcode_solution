class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        int h=n/2;
        long long total=0;
        for(int i:nums){
            total+=i;
        }
        long long windows=0;
        for(int i=0;i<h;i++){
            windows+=nums[i];
        }
        int ans=0;
        if(windows>total-windows){
            ans++;
        }
        for(int i=0;i<n-1;i++){
            windows-=nums[i];
            windows+=nums[(i+h)%n];
            if(windows>total-windows){
                ans++;
            }
        }
        return ans;
    }
};