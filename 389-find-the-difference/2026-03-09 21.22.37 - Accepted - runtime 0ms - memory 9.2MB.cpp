class Solution {
public:
    char findTheDifference(string s, string t) {
        int s1=0;
        int s2=0;
        for(int a:s){
            s1+=a;
        } 
        for(int b:t){
            s2+=b;
        }
        int x=abs(s1-s2);
        char ch=(char)x;
        return ch;
    }
};