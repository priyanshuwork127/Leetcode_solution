class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxp=0;
        int maxn=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                maxn++;
            }
            else if(nums[i]>0){
                maxp++;
            }
        }
        return max(maxn,maxp);
    }
};