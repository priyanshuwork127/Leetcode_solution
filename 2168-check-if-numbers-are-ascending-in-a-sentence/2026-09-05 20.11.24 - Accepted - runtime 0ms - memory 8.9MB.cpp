class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string i;
        vector<int> arr;
        while(ss>>i){
            if(isdigit(i[0])){
                arr.push_back(stoi(i));
            }
        }
        int a=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]>arr[i] || arr[i-1]==arr[i]){
                return false;
            }
        }
        return true;
    }
};