class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxw=0;
        for(int i=0;i<sentences.size();i++){
            int s=0;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' '){
                    s++;
                }
            }
            maxw=max(maxw,s);
        }
        return maxw+1;
    }
};