class Solution {
public:
    int countSegments(string s) {
       int n = s.size() ;
       bool firstl = true ; 
       int count = 0 ;
       for(int i = 0 ; i < n ; i++){
       if((s[i] != ' ')&& (firstl)){
        firstl = false ;
        count++;
       }else if (s[i] != ' '){
        continue ; 
       }else{
        firstl = true ;
       }
       }
       return count ; 
    }
};
