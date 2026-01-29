class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        unordered_set<int> seen; 
        int i = 0,j = 0;
        while(i<n && j<n){
            if(!(seen.count(s[j]))){
                seen.insert(s[j]);
                j++;
                if(j<=n) ans = max(ans,j-i);
                
            }else{
                ans = max(ans,j-i);
                while(s[i]!=s[j]){
                    seen.erase(s[i]);
                    i++;
                }
                if(s[i]==s[j]){
                    seen.erase(s[i]);
                    i++;
                }
            }
        }
        return ans;
    }
};
