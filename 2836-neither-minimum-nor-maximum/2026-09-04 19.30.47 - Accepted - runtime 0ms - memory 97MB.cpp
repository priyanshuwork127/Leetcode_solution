class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()==2){
            return -1;
        }
        int m=nums[0];
        int mi=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>m){
                m=nums[i];
            }
            else if(nums[i]<mi){
                mi=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=m && nums[i]!=mi){
                return nums[i];
            }
        }
        return -1;
    }
};