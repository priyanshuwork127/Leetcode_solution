class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        
        // Sort even indices in ascending order
        for(int i = 0; i < n - 1; i += 2) {
            int minIndex = i;
            for(int j = i + 2; j < n; j += 2) {
                if(nums[j] < nums[minIndex]) {  // Compare with nums[minIndex]
                    minIndex = j;
                }
            }
            if(minIndex != i) {
                swap(nums[i], nums[minIndex]);
            }
        }
        
        // Sort odd indices in descending order
        for(int i = 1; i < n - 1; i += 2) {
            int maxIndex = i;
            for(int j = i + 2; j < n; j += 2) {
                if(nums[j] > nums[maxIndex]) {  // Compare with nums[maxIndex]
                    maxIndex = j;
                }
            }
            if(maxIndex != i) {
                swap(nums[i], nums[maxIndex]);
            }
        }
        
        return nums;
    }
};