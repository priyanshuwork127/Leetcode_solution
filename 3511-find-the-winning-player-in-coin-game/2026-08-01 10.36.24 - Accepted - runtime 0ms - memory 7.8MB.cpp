class Solution {
public:
    string winningPlayer(int x, int y) {
        int a=min(x,y/4);
        if(a%2==0){
            return "Bob";
        }   
       return "Alice";
    }
};