class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans=-1;
        int minDist=INT_MAX;
        for(int i=0;i<drones.size();i++){
            int dist=abs(target[0]-drones[i][0])+abs(target[1]-drones[i][1]);
            if(dist<=drones[i][2] && dist<minDist){
                minDist=dist;
                ans=i;
            }
        }
        return ans;
    }
};