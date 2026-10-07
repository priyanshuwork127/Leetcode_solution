class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int m=nums[0];

        for(int i=1;i<nums.size();i++){
            if(abs(nums[i])<abs(m)){
                m=nums[i];
            }
            else if(abs(nums[i])==abs(m) && abs(nums[i])>m){
                m=nums[i];
            }
        }
        return m;
    }
};