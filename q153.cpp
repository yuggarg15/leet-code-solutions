class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(nums[0]<nums[n-1]) return nums[0];
        int st = 0 ;
        int end = n-1 ;
        while(end > st + 1){
            int mid = st + (end - st)/2 ;
            if(nums[0]>nums[mid]){
                end = mid ;
            }else{
                st = mid ;
            }
        }
        return nums[end] ;
    }
};
