class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s1=INT_MIN;
        int s2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>s1 && nums[i]>s2){
                s2=s1;
                s1=nums[i];
            }
            else if(nums[i]>s2){
                s2=nums[i];
            }
        }
        return (s1-1)*(s2-1);
    }
};