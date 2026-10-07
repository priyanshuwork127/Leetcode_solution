class Solution {
public:
    int findLucky(vector<int>& arr) {
        set<int> s(arr.begin(),arr.end());
        int ans=-1;
        for(int i :s){
            int n=0;
            for(int j :arr){
                if(i==j){
                    n++;
                }
            }
            if(n==i){
                ans=max(ans,i);             //take largest lucky no
            }
        }
        return ans;
    }
};