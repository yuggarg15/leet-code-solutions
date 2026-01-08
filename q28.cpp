class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length() ; 
        int a = 0 ;
        bool dhundrhehai = false ; 
        int start = 0 ; 
        for(int i = 0 ; i < haystack.length() ; i ++){
            if(haystack[i]==needle[a]){
                dhundrhehai = true ; 
                if(a==0){
                    start = i ; 
                    cout << start ; 
                }
                if(a == m-1){
                    return i-a ; 
                }
                a++;
            }else if ((dhundrhehai) && (haystack[i]!=needle[a])){
                a = 0 ;
                i = start  ;
                dhundrhehai = false ;
            }
            else{
                a = 0 ; 
                dhundrhehai = false ;
            }
        }
        return -1 ; 
    }
};
