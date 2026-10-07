class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int inertpos=0;
        for(int num:nums){
            if(num!=0){
                nums[inertpos]=num;
                inertpos++;
            }
        }
        while(inertpos<nums.size()){
            nums[inertpos]=0;
            inertpos++;
        }
    }
};