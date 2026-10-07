class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> s={-1,-1};
        vector<int> ans;
        vector<int> aa;
        if(nums.size()!=0){
            int counter=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==target){
                    counter++;
                    ans.push_back(i);
                }
            }
            if(counter!=0){
                aa.push_back(ans[0]);
                aa.push_back(ans[ans.size()-1]);
                return aa;
            }
            else{
                return s;
            }
        }
        return s;
    }
};