class Solution {
public:

    int daycount(string s1){
        int days[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int m=stoi(s1.substr(0,2));
        int d=stoi(s1.substr(3,5));
        int total=d;
        for(int i=0;i<m-1;i++){
            total+=days[i];
        }
        return total;
    }
    
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int astart=daycount(arriveAlice);
        int aleave=daycount(leaveAlice);
        int bstart=daycount(arriveBob);
        int bleave=daycount(leaveBob);
        int start=max(astart,bstart);
        int end=min(aleave,bleave);
        if(start>end){
            return 0;
        }
        else{
            return end-start+1;
        }
    }
};