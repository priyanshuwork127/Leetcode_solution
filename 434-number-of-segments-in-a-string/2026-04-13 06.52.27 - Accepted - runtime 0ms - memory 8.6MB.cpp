class Solution {
public:
    int countSegments(string s) {
        vector<string> arr;
        string temp = "";

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                if(temp != "") {
                    arr.push_back(temp);
                    temp = "";
                }
            } else {
                temp += s[i];
            }
        }

        if(temp != "") arr.push_back(temp);

        return arr.size();
    }
};