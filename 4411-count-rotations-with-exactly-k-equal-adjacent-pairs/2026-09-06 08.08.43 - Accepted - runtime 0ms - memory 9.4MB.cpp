class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int b=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                b++;
            }
        }
        int circle=(s[n-1]==s[0]);
        int ans=0;
        int originalscore=b;
        if(originalscore==k){ans++;}
        for(int h=1;h<n;h++){
            int c=(s[h-1]==s[h]);
            int score=b-c+circle;
            if(score==k){ans++;}
        }
        return ans;
    }
};