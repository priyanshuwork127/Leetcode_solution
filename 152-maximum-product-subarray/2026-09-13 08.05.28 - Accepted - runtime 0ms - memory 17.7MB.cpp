class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod=nums[0];
        int maxend=nums[0];
        int minen=nums[0];
        int curr=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxend,minen);
            }
            maxend=max(nums[i],nums[i]*maxend);
            minen=min(nums[i],nums[i]*minen);
            maxprod=max(maxend,maxprod);
        }
        return maxprod;
    }
};