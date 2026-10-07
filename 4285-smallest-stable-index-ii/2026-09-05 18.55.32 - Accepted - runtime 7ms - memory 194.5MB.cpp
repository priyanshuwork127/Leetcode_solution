class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int prefixmax[n];
        int suffixmin[n];
        prefixmax[0]=nums[0];
        suffixmin[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            prefixmax[i]=max(prefixmax[i-1],nums[i]);
        }
        for(int j=n-2;j>=0;j--){
            suffixmin[j]=min(suffixmin[j+1],nums[j]);
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(prefixmax[i]-suffixmin[i]<=k){
                ans=min(i,ans);
            }
        }
        if(ans!=INT_MAX){
                return ans;
        }
        return -1;
    }
};