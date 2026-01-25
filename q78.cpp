//attempt 1 - recursion - 
class Solution {
public:
    vector<vector<int>> f(vector<vector<int>>& input, vector<int>& nums,int i) {
            if(i==nums.size()){
                return input;
            }
            int a = input.size() ;
            for(int j = 0 ; j < a ; j++){
                vector<int> temp = input[j];
                temp.push_back(nums[i]);
                input.push_back(temp);
            }
            i++;
            return f(input,nums,i);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v = {{}};
        int i = 0;
        return f(v,nums, i);
    }
};

//method 2 - backtracking 
class Solution {
public:
    vector<vector<int>> ans ;
    void f(vector<int>& arr,vector<int>& nums , int i ){
        if(i==nums.size()){
            ans.push_back(arr);
            return ;
        }
        arr.push_back(nums[i]);
        f(arr,nums,i+1); 
        arr.pop_back();
        f(arr,nums,i+1); 
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0 ; 
        vector<int> arr;
        f(arr,nums,i);
        return ans;
    }
};
// interview method khtrnk 
