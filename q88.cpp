class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = 0 , j = 0 ; 
    while(i<m && j<n){
        if(nums1[m-1-i]>nums2[n-1-j]){
        nums1[m+n-1-i-j] = nums1[m-1-i];
        i++ ; 
        }else{
        nums1[m+n-1-i-j] = nums2[n-1-j];
        j++ ;
        }
    }
    while(j<n){
        nums1[m+n-1-i-j] = nums2[n-1-j];
        j++ ;
    }
    }
};
