class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result;
        
        for (const string& word : words) {
            long long totalWeight = 0;  // safer for large sums
            
            for (char c : word) {
                totalWeight += weights[c - 'a'];
            }
            
            int modValue = totalWeight % 26;
            char mappedChar = 'z' - modValue;  // reverse alphabetical mapping
            
            result += mappedChar;
        }
        
        return result;
    }
};
