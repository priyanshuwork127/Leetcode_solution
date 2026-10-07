class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        set<int> s2(nums[0].begin(), nums[0].end());

        for (int i = 1; i < nums.size(); i++) {

            set<int> s3(nums[i].begin(), nums[i].end());
            set<int> res;

            set_intersection(
                s2.begin(), s2.end(),
                s3.begin(), s3.end(),
                inserter(res, res.begin())
            );

            s2 = res;
        }

        return vector<int>(s2.begin(), s2.end());
    }
};