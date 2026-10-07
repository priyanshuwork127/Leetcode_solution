class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if(source==target){
            return 0;
        }
        int x=(source[0]+source[1])%2;
        int y=(target[0]+target[1])%2;
        if(x!=y){
            return -1;
        }
        
        int d=abs(source[0]-target[0]);
        int d1=abs(source[1]-target[1]);
        if(d1==d){
            return 1;
        }
        return 2;
    }
};