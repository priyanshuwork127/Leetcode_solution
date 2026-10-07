class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> nums2;
        for(int i=0;i<nums.size();i++){
            int s=0;
            while(nums[i]>0){
                s+=nums[i]%10;
                nums[i]/=10;
            }
            nums2.push_back(s);
        }
        int ans=nums2[0];
        for(int i=0;i<nums2.size();i++){
            if(ans>nums2[i]){
                ans=nums2[i];
            }
        }
        return ans;
    }
};