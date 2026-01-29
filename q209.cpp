class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0 , j = 0 ; 
        int n = nums.size();
        int sum = nums[0];
        int ans = n+1;
        while(i<n &&j<n){
            if(sum<target){
                j++;
                if(j<n){
                sum += nums[j];
                }
            }else{
                ans = min(j-i+1,ans);
                sum-= nums[i];
                i++;
            }
        }
        if(ans<n+1){
            return ans;
        }
        return 0 ; 
    }
};
