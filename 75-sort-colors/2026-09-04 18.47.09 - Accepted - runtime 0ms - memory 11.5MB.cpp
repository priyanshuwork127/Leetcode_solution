class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int z=0;
        int o=0;
        int t=0;
        for(int i:nums){
            if(i==0){
                z++;
            }
            else if(i==1){
                o++;
            }
            else{
                t++;
            }
        }
        int index=0;
        for (int i = 0; i < z; i++) {
            nums[index] = 0;
            index++;
        }

        for (int i = 0; i < o; i++) {
            nums[index] = 1;
            index++;
        }

        for (int i = 0; i < t; i++) {
            nums[index] = 2;
            index++;
        }

        // return nums;
    }
};