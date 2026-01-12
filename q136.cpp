class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = nums[0] ;
        int n = nums.size();
        for(int i = 1 ; i < n ; i ++)  {
            sum ^=nums[i] ;
        }
        return sum ; 
    }
};
