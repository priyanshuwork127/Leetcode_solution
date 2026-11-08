class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;

        string st1="";
        string st2="";
        for(int i=0;i<s1.size();i++){
            vector<string> arr;
            if(s1[i]==s2[i]){
                if(st1!="" && st2!=""){
                    arr.push_back(st1);
                    arr.push_back(st2);
                    ans.push_back(arr);
                }
                st1="";
                st2="";
                arr.clear();
            }
            else{
                st1+=s1[i];
                st2+=s2[i];
                
            }
            if(i==s1.size()-1 && st1!="" && st2!=""){
                arr.push_back(st1);
                    arr.push_back(st2);
                    ans.push_back(arr);
            }
        }
        return ans;
    }
};