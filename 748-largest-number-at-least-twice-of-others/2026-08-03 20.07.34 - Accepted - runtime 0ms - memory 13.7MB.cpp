class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans=INT_MIN;
        int a;
        for(int i=0;i<nums.size();i++){
            if(ans<nums[i]){
                ans=nums[i];
                a=i;
            }
        }
        int c=0;
        for(int i=0;i<nums.size();i++){

            if(i!=a && ans<2*nums[i]){
                return -1;
            }
        }
        return a;
    }
};