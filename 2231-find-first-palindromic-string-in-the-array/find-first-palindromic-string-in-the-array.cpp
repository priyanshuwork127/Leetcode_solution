class Solution {
public:
    bool palindrome(string s){
        string rev=s;
        reverse(rev.begin(),rev.end());
        return rev==s;
    }
    string firstPalindrome(vector<string>& words) {
        for(string word:words){
            if(palindrome(word)){
                return word;
            }
        }
         return "";
    }
};