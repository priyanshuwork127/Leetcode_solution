class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0){
            return s;
        }
        int maxlen=1;
        int start=0;
        for(int i=0;i<n;i++){
            // if(n%2!=0){
                int l=i;
                int r=i;
                while(l>=0 && r<n && s[l]==s[r]){
                    l--;
                    r++;
                }
                int len = r - l - 1;
                if(len>maxlen){
                    maxlen=len;
                    start=l+1;
                }
            // }/
                l=i;
                r=i+1;
                while(l>=0 && r<n && s[l]==s[r]){
                    l--;
                    r++;
                }
                len = r - l - 1;
                if(len>maxlen){
                    maxlen=len;
                    start=l+1;
                }

        }
        return s.substr(start, maxlen);
    }
};