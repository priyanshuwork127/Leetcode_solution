class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int s=costs.size();
        int x=*max_element(costs.begin(),costs.end());
        vector<int> count(x+1,0);
        for(int i=0;i<s;i++){
            count[costs[i]]++;
        }
        vector<int> ans;
        int ind=0;
        for(int i=0;i<x+1;i++){
            while(count[i]>0){
                costs[ind]=i;
                ind++;
                count[i]--;
            }
        }
        int co=0;
        for(int i=0;i<costs.size();i++){
            if(coins>=costs[i]){
                coins-=costs[i];
                co++;
            }else{
                break;
            }
        }
        return co;
    }
};