class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> right(n,1);
        vector<int> left(n,1);
        vector<int> ans(n,1);
        int lef=1;
        for(int i=0;i<n;i++){
            left[i]=lef;
            lef*=nums[i];
        }
        int righ=1;
        for(int j=n-1;j>=0;j--){
            right[j]=righ;
            righ*=nums[j];
        }
        for(int k=0;k<n;k++){
            ans[k]=left[k]*right[k];
        }
        return ans;
    }
};