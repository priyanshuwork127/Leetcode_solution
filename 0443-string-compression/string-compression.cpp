class Solution {
public:
    int compress(vector<char>& chars) {
        string ans;
        int a=1;
        char c=chars[0];
        ans+=c;
        for(int i=1;i<chars.size();i++){
            if(c==chars[i]){
                a++;
            }
            else if(c!=chars[i]){
                string chCpp =to_string(a);
                if(a>1){
                    ans+=chCpp;
                }
                a=1;
                c=chars[i];
                ans+=c;
            }
            
        }
        if(a>1){
            ans+=to_string(a);
        }
        for(int i = 0; i < ans.size(); i++){
    chars[i] = ans[i];
}
        return ans.size();
    }
};