class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxw=0;
        for(int i=0;i<accounts.size();i++){
            int s=accounts[i].size();
            int sum=0;
            for(int j=0;j<s;j++){
                sum+=accounts[i][j];
            }
            maxw=max(maxw,sum);
        }
        return maxw;
    }
};