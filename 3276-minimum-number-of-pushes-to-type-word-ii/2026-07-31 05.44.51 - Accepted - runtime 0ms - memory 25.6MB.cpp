class Solution {
public:
    int minimumPushes(string word) {
        vector<int> Freq(26,0);
        for(char c:word){
            Freq[c-'a']++;
        }
        sort(Freq.begin(),Freq.end(),greater<int>());
        int ans=0;
        for(int i=0;i<26;i++){
            if(Freq[i]==0){
                break;
            }
            ans+=(i/8 +1)*Freq[i];
        }
        return ans;
    }
    
};