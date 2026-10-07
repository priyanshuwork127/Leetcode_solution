class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int s=0;
        int ans=0;
        for(int i=0;i<k;i++){
            s+=arr[i];
        }
        if(s>=threshold*k){
            ans++;
        }
        for(int i=k;i<arr.size();i++){
            s=s+arr[i]-arr[i-k];
            if(s>=threshold*k){
                ans++;
            }
        }
        return ans;
    }
};