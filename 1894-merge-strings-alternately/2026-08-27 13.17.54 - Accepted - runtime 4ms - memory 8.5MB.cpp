class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        int m=word1.size();
        int n=word2.size();
        string ans;
        while(i<m && j<n){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            i++;
            j++;
        }
        while(i<m){
            ans.push_back(word1[i]);
            i++;
        }
        while(j<n){
            ans.push_back(word2[j]);
            j++;
        }
        return ans;
    }
};