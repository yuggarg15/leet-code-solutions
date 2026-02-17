class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        vector<int> ans ; 
        int leftprod = 1 ; 
        ans.push_back(leftprod);
        for(int i = 1 ; i < nums.size() ; i++){
            leftprod = leftprod*nums[i-1];
            ans.push_back(leftprod);
        }
        int rightprod = 1 ;
        for(int j = nums.size() - 2 ; j >= 0; j--){
            rightprod = rightprod * nums[j+1];
            ans[j] = ans[j]*rightprod ;
        }
        return ans ;
    }     
};
