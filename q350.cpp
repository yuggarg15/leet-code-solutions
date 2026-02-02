class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        for(int i = 0 ; i < m ; i++){
            m1[nums1[i]]++;
        }
        for(int i = 0 ; i < n ; i ++){
            m2[nums2[i]]++;
        }
        vector<int> ans ;
        for(int i = 0 ; i < m ; i++){
            int small = min(m1[nums1[i]],m2[nums1[i]]);
            for(int j = 0 ; j <small; j++){
                ans.push_back(nums1[i]);
            }
            m2.erase(nums1[i]);
        }
        return ans;
    }
};
