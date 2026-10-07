class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int m = nums[0];
        int n = nums[0];
        int i = 0;
        int j = 0;

        if(nums.size() == 1){
            return 1;
        }

        for(int k = 1; k < nums.size(); k++){
            if(m < nums[k]){
                i = k;
                m = nums[k];
            }
        }

        for(int k = 1; k < nums.size(); k++){
            if(n > nums[k]){
                j = k;
                n = nums[k];
            }
        }

        int size = nums.size();

        int left = min(i, j);
        int right = max(i, j);

        int ans1 = right + 1;
        int ans2 = size - left;
        int ans3 = left + 1 + size - right;

        return min({ans1, ans2, ans3});
    }
};