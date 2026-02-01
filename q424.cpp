class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0 , ans = 0 ;
        int maxfreq = 0;
        unordered_map<char,int> map ;
        for(int j = 0 ; j < s.size() ; j++){
            map[s[j]]++;
            maxfreq = max(maxfreq,map[s[j]]);
            while(j - i + 1 - maxfreq > k){
                map[s[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};
