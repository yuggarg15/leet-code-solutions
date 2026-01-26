class Solution {
public:
    vector<vector<int>> ans ; 
    void f(vector<int>& arr, vector<int>& nums,int i){
        if(i == nums.size()){
            ans.push_back(arr);
            return ;
        }
        arr.push_back(nums[i]);
        if(find(ans.begin(), ans.end(), arr) ==  ans.end()){
            f(arr,nums,i+1);
        }
        
        arr.pop_back();
        if(find(ans.begin(), ans.end(), arr) ==  ans.end()){
            f(arr,nums,i+1);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> arr ; 
        sort(nums.begin(),nums.end());
        int i = 0 ; 
        f(arr,nums,i);
        return ans ; 
    }
};
