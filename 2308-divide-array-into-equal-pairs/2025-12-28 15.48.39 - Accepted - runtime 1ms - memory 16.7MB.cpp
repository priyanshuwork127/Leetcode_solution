class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int s=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            // for(int j=0;j<nums.size();j++){
                if(nums[i]!=nums[i+1]){
                    return false;
                }
        }
        return true;
    }
};