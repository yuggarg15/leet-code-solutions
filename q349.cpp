class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        unordered_set<int> s1;
        unordered_set<int> s2;
        for(int i = 0 ; i < m ; i ++){
            s1.insert(nums1[i]);
        }
        for(int i = 0 ; i < n ; i++){
            s2.insert(nums2[i]);
        }
        vector<int> ans;
        for(int i = 0 ; i < m ; i++){
            if(s2.count(nums1[i])){
                ans.push_back(nums1[i]);
            }
            s2.erase(nums1[i]);
        }
        return ans;
    }
};
