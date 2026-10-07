class Solution {
public:
    bool isPalindrome(string s) {
        string ca="";
        for(char c:s){
            if((c>='0' && c<='9') || (c>='a' && c<='z') ||(c>='A' && c<='Z')){
                ca+=tolower(c);
            }
        }
        string r=ca;
        reverse(r.begin(),r.end());
        return r==ca;
    }
};