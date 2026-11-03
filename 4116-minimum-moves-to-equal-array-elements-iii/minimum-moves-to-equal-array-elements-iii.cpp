class Solution {
public:
    int ma(vector<int>& nums){
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(m<nums[i]){
                m=nums[i];
            }
        }
        return m;
    }
    int minMoves(vector<int>& nums) {
        int a=ma(nums);
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=abs(a-nums[i]);
        }
        return ans;
    }
};