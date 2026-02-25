class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> st ; 
        vector<int> ans; 
        int n = nums2.size();
        for(int i = n-1 ; i >=0 ; i-- ){
            while((st.size()>0)&&(nums2[i]>=nums2[st.top()])){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
                st.push(i);
            }else if(nums2[i]<nums2[st.top()]){
                ans.push_back(nums2[st.top()]);
                st.push(i);
            }
        }
        reverse(ans.begin(), ans.end());
        unordered_map<int,int> m ;
        for(int i = 0 ; i < n ; i ++){
            m[nums2[i]] = i ;
        }
        n = nums1.size();
        for(int i = 0 ; i < n ; i ++){
            nums1[i] = ans[m[nums1[i]]];
        }
        return nums1 ; 
    }
};
