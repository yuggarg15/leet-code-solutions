class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int n = nums.size() ; 
    if(n==1){
        return ;
    }
    if(n==2){
        swap(nums[n-1],nums[n-2]);
        return ;
    }
    if(nums[n-1] > nums[n-2]){
        swap(nums[n-1],nums[n-2]);
    }else {  
        int i = 1 ; 
        while((i<n) && (nums[n-i] <= nums[n-1-i]) ) {
        i++ ;
        }
        if(i<n){
        int j = 1;
        while(j<=i){
            if(nums[n-j]>nums[n-i-1]) {
                break ;
            }
            j++;
        }
        swap(nums[n-1-i],nums[n-j]) ;
        
        for(int a = 0 ; a < i/2  ; a ++){
            swap(nums[n-i+a] , nums[n-1-a]);
        }
        }else{
            for(int a = 0 ; a < i/2  ; a ++){
            swap(nums[n-i+a] , nums[n-1-a]);
        }
        }


        }
        }

    
};
