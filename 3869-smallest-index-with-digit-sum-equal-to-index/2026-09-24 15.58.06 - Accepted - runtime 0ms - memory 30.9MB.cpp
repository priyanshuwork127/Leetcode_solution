class Solution {
public:
    int sum(int x){
        int s=0;
        while(x>0){
            s+=x%10;
            x/=10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        int index=-1;
        for(int i=0;i<nums.size();i++){
            int x=sum(nums[i]);
            if(x==i){
                return i;
            }
        }
        return -1;
    }
};