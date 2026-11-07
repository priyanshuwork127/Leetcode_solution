class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans=0;
        int i=0;
        int j=-1;

        
       for(int i=0;i<s.size();i++){
           if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
               j=i-2;
           }
           ans+=i-j;
       }
        return ans;
    }
};