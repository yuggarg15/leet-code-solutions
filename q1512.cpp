class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> freq ; 
        int sum = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            freq[nums[i]]++ ; 
        }
        for(auto it : freq){
            if(it.second>1){
                int n = it.second ; 
                sum += ((n)*(n-1))/2;
            }
        }
        return sum ;   
    }
};
