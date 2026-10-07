class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        vector<bool> count(256,0);
        int left=0;
        int right=0;
        while(right<s.size()){
            while(count[s[right]]){
                count[s[left]]=0;
                left++;
            }
            count[s[right]]=1;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};