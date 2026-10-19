class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        if(asteroids.size()==0){
            return {};
        }
        stack<int> st;
        st.push(0);
        int n=asteroids.size();
        for(int i=1;i<n;i++){
            bool alive =true;
            while(!st.empty() && alive && st.top()<i && asteroids[st.top()]>0 && asteroids[i]<0){
                if(abs(asteroids[st.top()])<abs(asteroids[i])){
                    st.pop();
                    alive=true;
                }
                else if(abs(asteroids[st.top()])==abs(asteroids[i])){
                    st.pop();
                    alive=false;
                }
                else{
                    alive=false;
                }
            }
            if(alive==true){
            st.push(i);}
        }
        vector<int> ans;
        int s=st.size();
        for(int i=0;i<s;i++){
            int a=st.top();
            ans.push_back(asteroids[a]);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};