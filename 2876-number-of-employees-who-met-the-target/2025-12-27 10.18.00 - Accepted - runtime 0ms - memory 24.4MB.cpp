class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int s=0;
        for(int i=0;i<=hours.size()-1;i++){
            if(hours[i]>=target){
                s=s+1;
            }
        }
        return s;
    }
};