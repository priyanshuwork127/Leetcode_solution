class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;
        for(int x:nums){
            string st="";
            int z=x/(1<<25);
            st.append(z,'z');
            x%=(1<<25);
            for(int i=30;i>=0;i--){
                if(x & (1<<i)){
                    st+=char('a'+i);
                }
            }
            ans.push_back(st);
        }
        return ans;
    }
};