class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> ans(n+1);
        ans[0]=0;
        for(int i=1;i<=n;i++){
            ans[i]=ans[i-1]+gain[i-1];
        }
        int max=ans[0];
        for(int i=1;i<n+1;i++){
            if(max<ans[i]){
                max=ans[i];
            }
        }
        return max;
    }
};