class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {

            // Find nums1[i] in nums2
            int index = 0;

            while (nums2[index] != nums1[i]) {
                index++;
            }

            int greater = -1;

            // Search to the right
            for (int j = index + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums1[i]) {
                    greater = nums2[j];
                    break;
                }
            }

            ans.push_back(greater);
        }

        return ans;
    }
};