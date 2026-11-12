class Solution {
public:
    void subset(vector<int>& nums,int index,int current,int& sum){
        if(index==nums.size()){
            sum+=current;
            return;
        }
        subset(nums,index+1,current,sum);
        subset(nums,index+1,current^nums[index],sum);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        subset(nums,0,0,sum);
        return sum;
    }
};