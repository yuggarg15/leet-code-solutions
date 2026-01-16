class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map <char,int> position ; 
        int diff = 0 ; 
        for(int i = 0 ; i < s.size() ; i ++){
            position[s[i]]= i ;
        }
        int sum = 0 ;
        for(int i = 0 ; i < t.size() ; i ++){
            diff = i - position[t[i]];
            if(diff<0){
                diff= diff*(-1) ; 
            }
             sum+=diff ; 
        }
        return sum ; 
    }
};
