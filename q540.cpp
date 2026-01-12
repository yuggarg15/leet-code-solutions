class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size() , ans = 0 ;
    int st = 0 , end = nums.size() - 1 ;
    if(n == 1){
        return nums[0] ;
    }
    while(st <= end ){
        int mid = st + (end - st)/2 ;
        if(mid == 0){
            return nums[0] ;
        }
        if(mid == n-1 ){
            return nums[n-1] ;
        }
        if(nums[mid]== nums[mid-1]){
            if(mid%2==0){
                end = mid -1  ;
            }else{
                st = mid + 1; 
            }
        }
        if(nums[mid]== nums[mid+1]){
            if(mid%2==0){
                st = mid + 1  ;
            }else{
                end = mid - 1 ; 
            }
        }
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            ans = nums[mid];
            return nums[mid] ; 
            break ;
        }
        
    }
    return ans ; 
    }
};
