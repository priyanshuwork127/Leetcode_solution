class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // int i=-1;
        int prefixmax[nums.size()];
        prefixmax[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefixmax[i]=max(prefixmax[i-1],nums[i]);
        }
        int suffixmin[nums.size()];
        suffixmin[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            suffixmin[i]=min(suffixmin[i+1],nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            int instability = prefixmax[i] - suffixmin[i];

            if (instability <= k) {
                return i;
            }
        }
        return -1;
    }
};