class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> arr;

        for(int num : nums)
        {
            string s = to_string(num);

            for(char ch : s)
            {
                arr.push_back(ch - '0');
            }
        }

        return arr;
    }
};