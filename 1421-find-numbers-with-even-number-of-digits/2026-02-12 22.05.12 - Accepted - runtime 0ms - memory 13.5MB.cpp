class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int e=0;
        for(int i=0;i<nums.size();i++){
            long long n=0;
            while(nums[i]>0){
                n++;
                nums[i]=nums[i]/10;
            }
            if(n%2==0){
                e++;
            }

        }
        return e;
    }
};