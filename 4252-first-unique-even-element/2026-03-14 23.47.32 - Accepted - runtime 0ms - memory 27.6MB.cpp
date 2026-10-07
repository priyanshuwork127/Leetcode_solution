class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int cunt;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                cunt=0;
                for(int j=0;j<nums.size();j++){
                    if(nums[i]==nums[j]){
                        cunt++;
                    }
                }
            }
            if(cunt==1){
                return nums[i];
            }
        }
        return -1;
    }
};