class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> once ;
        for(int i = 0 ; i < nums.size() ; i++){
            once.insert(nums[i]);
        }
        if(once.size()==nums.size()){
            return false;
        }
        return true;
    }
};
