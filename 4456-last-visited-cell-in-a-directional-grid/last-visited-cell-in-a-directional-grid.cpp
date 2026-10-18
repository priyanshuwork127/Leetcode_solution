class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int sr=0;
        int sc=0;
        while(true){
            char ch=grid[sr][sc];
            grid[sr][sc]='#';
            int nextr=sr;
            int nextc=sc;
            if(ch=='L'){
                nextc--;
            }
            else if(ch=='R'){
                nextc++;
            }
            else if(ch=='U'){
                nextr--;
            }
            else if(ch=='D'){
                nextr++;
            }
                
            if(nextr<0 || nextc<0 || nextr>=row || nextc>=col||grid[nextr][nextc]=='#'){
                break;
            }
            sr=nextr;
            sc=nextc;
        }
        return {sr,sc};
    }
};