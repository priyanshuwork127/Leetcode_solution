class Solution {
public:
    int convertTime(string current, string correct) {
        int cut=stoi(current.substr(0,2))*60+stoi(current.substr(3,2));
        int cot=stoi(correct.substr(0,2))*60+stoi(correct.substr(3,2));
        int dif=cot-cut;
        vector<int> s={60,15,5,1};
        int ans=0;
        for(int v:s){
            ans+=dif/v;
            dif=dif%v;
        }
        return ans;
       

       
    }
};