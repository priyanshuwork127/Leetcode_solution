class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i]^nums[i+1])==0){
                a++;
                // i++;
            }
        }
        return a;
    }
};