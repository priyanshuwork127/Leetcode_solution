class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int num=0;
        for(char c:jewels){
            num+=count(stones.begin(),stones.end(),c);
        }
        return num;
    }
};