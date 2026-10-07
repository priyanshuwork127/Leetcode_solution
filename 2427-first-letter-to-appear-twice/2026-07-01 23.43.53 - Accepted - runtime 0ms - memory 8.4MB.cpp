class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> ans;
        for(char ch:s){
            if(ans.find(ch)!=ans.end()){
                return ch;
            }
            else{
                ans.insert(ch);
            }
        }
        return ' ';
    }
};