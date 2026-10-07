class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int maxw=0;
        int w,ht,ca;
        while(lp<rp){
            w=rp-lp;
            ht=min(height[lp],height[rp]);
            ca=w*ht;
            maxw=max(ca,maxw);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return maxw;
    }
};