class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> anss;
        for(int i=0;i<arr1.size();i++){
            while(arr1[i]>0){
                anss.insert(arr1[i]);
                arr1[i]/=10;
            }
        }
        int ans=0;
        for(int num:arr2){
            while(num>0){
                if(anss.count(num)){
                    ans=max(ans,(int)to_string(num).size());
                    break;
                }
                else{
                    num/=10;
                }
            }
        }
        return ans;
    }
};