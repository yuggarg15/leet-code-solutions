class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap ;
        vector<int> ans ; 
        
        
        for(int i = 0 ; i <nums.size();i++){
            int first = nums[i];
            int second = target - first ; 
            if(hashmap.find(second)!=hashmap.end()){
                ans.push_back(i);
                ans.push_back(hashmap[second]);
                break ; 
            }
            hashmap[first] = i ; 

        }
        return ans ; 
    }
};
