class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long a=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                a*=1;
            }
            else if(nums[i]<0){
                a*=-1;
            }
            else{
                a*=0;
            }
        }
        return a;
    }
};