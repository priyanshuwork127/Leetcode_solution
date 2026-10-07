class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        vector<int> nums1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                nums1.push_back(i);
            }
        }
        for(int i=0;i<nums.size();i++){
            for(int v:nums1){
                    if(abs(i-v)<=k){
                        ans.push_back(i);
                        break;
                    }
            }
        }
        return ans;
    }
};