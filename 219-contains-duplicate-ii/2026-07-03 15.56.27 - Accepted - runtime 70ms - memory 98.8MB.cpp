class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> lastindex;
        for(int i=0;i<nums.size();i++){
            if(lastindex.count(nums[i]) && abs(i-lastindex[nums[i]])<=k){
                return true;
            }
            else{
                lastindex[nums[i]]=i;
            }
        }
        return false;
    }
};