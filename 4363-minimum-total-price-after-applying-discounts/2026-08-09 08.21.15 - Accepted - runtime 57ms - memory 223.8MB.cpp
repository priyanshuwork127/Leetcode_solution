class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
        int ps=prices.size();
        int ds=discounts.size();
        double ans=0;
        int j=0;
        for(int i=0;i<ps && j<ds;i++){
               ans+=prices[i] * (100.0 - discounts[j])/ 100.0;
               j++;
               // ds--;
        }
        
        for(int l=j;l<ps;l++){
            ans+=prices[l];
        }
        return ans;
    }
};