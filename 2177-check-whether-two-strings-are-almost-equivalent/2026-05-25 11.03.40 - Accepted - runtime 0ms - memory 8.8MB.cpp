class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> freq;
        for(char ch:word1){
            freq[ch]++;
        }
        for(char ch:word2){
            freq[ch]--;
        }
        for(auto pair:freq){
            if(abs(pair.second)>3){
                return false;
            }
        }
        return  true;
    }
};