class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map <int,int> m;
        int currentsum = 0 ;
        int modulo = 0 ;
        m[modulo]++;
        int ans = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            currentsum+=nums[i];
            modulo = currentsum%k;
            if(modulo<0) modulo+=k;
            ans += m[modulo];
            m[modulo]++;
        }
    return ans;
    }
};
