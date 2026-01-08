class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0 ; 
        int end = nums.size() -1; 
        int ans = 0 ;
        int mid = 0 ; 
        while(start <= end ) {
         mid = start + (end - start)/2 ;
            if (target > nums[mid] ) {
                start = mid + 1 ;
            }if (target < nums[mid]) {
                end = mid - 1 ;
            } if (target == nums[mid]) {
                ans = mid ;
                break ; 
            } 
        }
        if (target != nums[mid]) {
            if(target > nums[mid]) {
                ans = mid + 1;
            } else {
                ans = mid  ;
            }
            
        }
        return ans ; 
        }
};
