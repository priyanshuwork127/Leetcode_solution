class Solution {
public:
    bool isSameAfterReversals(int num) {
        int orig=num;
        int rev1=0,rev2=0;
        while(orig>0){
            rev1=rev1*10+orig%10;
            orig/=10;
        }
        while(rev1>0){
            rev2=rev2*10+rev1%10;
            rev1/=10;
        }
        if(rev2==num){
            return true;
        }
        else{
            return false;
        }
    }
};