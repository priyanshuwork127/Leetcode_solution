class Solution {
public:
    bool isGood(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        vector<int> count(mx + 1, 0);
        if(mx+1!=nums.size()){
            return false;
        }
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int j=1;j<mx;j++){
            if(count[j]!=1){
                return false;
            }
        }
        if(count[mx]!=2){
            return false;
        }
        return true;
    }
};