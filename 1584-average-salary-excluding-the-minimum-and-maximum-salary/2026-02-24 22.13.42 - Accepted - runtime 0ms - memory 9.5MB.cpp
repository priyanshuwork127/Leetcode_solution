class Solution {
public:
    double average(vector<int>& salary) {
        int ma=salary[0];
        int mi=salary[0];
        int sum=0;
        for(int s: salary){
            ma=max(ma,s);
            mi=min(mi,s);
            sum+=s;
        }
        return (double)(sum-ma-mi)/(salary.size()-2);

    }
};