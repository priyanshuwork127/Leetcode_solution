class Solution {
public:
int gcd(int num1,int num2){
    if(num2==0){
        return num1;
    }
    return gcd(num2,num1%num2);
}
    int findGCD(vector<int>& nums) {
        int ma=*max_element(nums.begin(),nums.end());
        int mi=*min_element(nums.begin(),nums.end());
        return gcd(mi,ma);
    }
};