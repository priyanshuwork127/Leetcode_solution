class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int ,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        for(int j:nums){
            if(freq[j]>1){
                return true;
            }
        }
        return false;
    }
};