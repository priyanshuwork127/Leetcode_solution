class Solution {
public:
    int longestPalindrome(string s) {

        //Count frequency
        unordered_map<char,int> frq;
        for(char c:s){
            frq[c]++;
        }
        bool hasoddfreq=false;
        int res=0;
        for(auto e:frq){
            int x=e.second;
            if(x%2==0){
                res+=x;
            }
            else{
                res+=x-1;
                hasoddfreq=true;
            }
        }
        if(hasoddfreq){
            res+=1;
        }
        return res;
    }
};