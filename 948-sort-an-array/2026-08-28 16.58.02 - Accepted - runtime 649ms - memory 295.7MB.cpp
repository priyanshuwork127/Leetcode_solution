class Solution {
public:
    void merge(vector<int> &arr,int start,int end,int mid){
        int i=start;
        int j=mid+1;
        vector<int> temp;
        while(i<=mid && j<=end){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
        for(int ind=0;ind<temp.size();ind++){
            arr[start+ind]=temp[ind];
        }
    }
    void mergesort(vector<int> &arr,int start,int end){
        if(start<end){
            int mid=start+(end-start)/2;
            mergesort(arr,start,mid);
            mergesort(arr,mid+1,end);
            merge(arr,start,end,mid);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};