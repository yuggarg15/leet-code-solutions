class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> m ;
        int currentsum = 0  ;
        m[currentsum]++;
        int prevsum = 0 ;
        int ans = 0;
        for(int i = 0 ; i < nums.size(); i ++){
            currentsum += nums[i];
            prevsum = currentsum - k ;
            if(m.count(prevsum)){
                ans += m[prevsum];
            }
            m[currentsum]++;
        }
        return ans;
    }
};
