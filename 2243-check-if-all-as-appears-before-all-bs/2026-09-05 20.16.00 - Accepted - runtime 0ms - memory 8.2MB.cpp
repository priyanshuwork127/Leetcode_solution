class Solution {
public:
    bool checkString(string s) {
        int a=-1;
        int b=-1;
        a=s.rfind('a');
        b=s.find('b');
        if(a==-1 || b==-1){
            return true;
        }
        else if(a>b){
            return false;
        }
        return true;
    }
};