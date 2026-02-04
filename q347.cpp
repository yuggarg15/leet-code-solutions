class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> m ;
        for(int i : nums) m[i]++;

        vector<pair<int,int>> v ;
        for(auto &[k,f] : m) v.push_back({f,k});
        sort(v.rbegin(),v.rend());
        vector<int> ans;
        for(int i = 0 ; i < k ; i ++) ans.push_back(v[i].second);
        return ans;
    }
};
