class Solution {
public:
    int minRotations(string s) {
        int sum=min(abs(s[0]-'0'),10-abs(s[0]-'0'));
        for(int i=1;i<s.size();i++){
            sum+=min(abs(s[i]-s[i-1]),10-abs(s[i]-s[i-1]));
        }
        return sum;
    }
};