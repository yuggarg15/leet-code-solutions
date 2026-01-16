class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> freq ; 
        for(int i = 0 ; i <stones.size(); i ++){
            freq[stones[i]]++; 
        }
        int ans = 0 ; 
        for(int i = 0 ; i < jewels.size(); i ++){
            ans += freq[jewels[i]] ; 
        }
        return ans ; 
    }
};
