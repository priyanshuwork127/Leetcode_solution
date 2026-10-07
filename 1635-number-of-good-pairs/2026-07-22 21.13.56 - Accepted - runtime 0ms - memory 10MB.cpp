class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto v:mp){
            int n=v.second;
            ans+=n*(n-1)/2;
        }
        return ans;
    }
};