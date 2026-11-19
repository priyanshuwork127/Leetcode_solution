class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k=0;
        int arr[m+n];
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                arr[k]=nums1[i];
                i++;
            }
            else{
                arr[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i<m){
            arr[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n){
            arr[k]=nums2[j];
            j++;
            k++;
        }
        for(int x:arr){
            cout<<x<<" ";
        }
        for (int x = 0; x < m + n; x++) {
            nums1[x] = arr[x];
        }
    }
};