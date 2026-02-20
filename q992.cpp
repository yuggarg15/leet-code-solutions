class Solution {
public:
    int func(vector<int>& nums, int k){
        unordered_map<int,int> m ;
        int i = 0 , j = 0 ;
        int ans = 0 ;
        int l = 0 ;
        for(int r = 0;r<nums.size();r++){
            m[nums[r]]++;
            while(l<=r && (m.size()>k)){
                m[nums[l]]--;
                if(!m[nums[l]]){
                    m.erase(nums[l]);
                }
                l++;
            }
            if(l<=r){
                ans+= r-l+1;
            }
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums,k) - func(nums,k-1);
    }
};
