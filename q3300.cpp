class Solution {
public:
    int minElement(vector<int>& nums) {
    int n = nums.size();
    int digit = 0;
    vector<int> additions;
    for(int i = 0 ; i < n ; i++){
        int num = 0 ; 
        while(nums[i]>0){
            digit = nums[i]%10;
            nums[i]/=10 ;
            num+=digit;
        }
        nums[i]= num;
    }
    int ans = 37 ;
    for(int i = 0 ; i < n ; i ++){
        if(ans>nums[i]){
            ans = nums[i];
        }
    }
    
    return ans ; 
    }
};
