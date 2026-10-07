class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(string c:operations){
            if(c=="+"){
                int f1=s.top();
                s.pop();
                int f2=s.top();
                s.push(f1);
                s.push(f1+f2);
            }
            else if(c=="D"){
                int d=s.top()*2;
                s.push(d);
            }
            else if(c=="C"){
                s.pop();
            }
            else{
                int b=stoi(c);
                s.push(b);
            }
        }
        int ans=0;
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};