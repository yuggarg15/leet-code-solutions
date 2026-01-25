class Solution {
public:
    bool kuchhbhi(int n){
        if(n==1) return true ;
        if(n%3) return false ;
        return kuchhbhi(n/3);
    }
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false ;  
        }
        if(n==1){
            return true ; 
        }
        return kuchhbhi(n);
    }
};
