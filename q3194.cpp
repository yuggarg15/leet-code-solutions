class Solution {
public:
    double minimumAverage(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    double ans = (nums[0]+nums[n-1])/2.0 ;
    for(int i = 0 ; i <n-1;i++){
        cout<<nums[i]<<" ";
    }
    for(int i = 0 ; i < n/2; i++){
        if(((nums[i]+nums[n-1-i])/2) < ans){
            ans = (nums[i]+nums[n-1-i])/2.0;
        }
    }
    return ans; 
    }
};
