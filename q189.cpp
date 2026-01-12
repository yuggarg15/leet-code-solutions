class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size() ;
        int temp = 0 ; 
        while(k>=n){
            k = k-n ;
        }
        
        for(int i = 0 ; i < k/2; i ++) {
           temp = nums[n - k + i] ;
           nums[n-k+i] = nums[n-1-i];
           nums[n-1-i] = temp ;
        }
        for(int i = 0 ; i < (n-k)/2 ;i++){
            temp = nums[i];
            nums[i] = nums[n-k-1-i] ;
            nums[n-k-1-i] = temp ;
        }
        for(int i = 0 ; i < n/2;i++){
            temp = nums[i];
            nums[i] = nums[n-1-i];
            nums[n-1-i] = temp ;
        }
        
    }
};
