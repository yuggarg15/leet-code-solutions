class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.size() - 1;
        
        bool ans = true ;
        
         while (st < end) {
             if ((s[end]<=47) || ((s[end]>=58) && (s[end] <= 64))|| ((s[end] >= 91) && (s[end] <= 96)) ||
                       (s[end] >= 123)) {
                end--;
            } else if ((s[st]<=47) || ((s[st]>=58) && (s[st] <= 64))|| ((s[st] >= 91) && (s[st] <= 96)) ||
                       (s[st] >= 123)) {
                st++; 
            } else if ((s[st] == s[end]) ||(((s[st]<=122)&&(s[st]>=97))&& (s[st] == s[end]+32))|| (((s[st]>=65)&&(s[st]<=90)) && (s[st] == s[end]-32))) {
                ans = true ; 
                st++;
                end--;   
            }             
            else {            
                return  false;
                
            }
        }
        
        return ans;
    }
};
