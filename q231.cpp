// fastest approach // 
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0){
            return false; 
        }
        if(!n){
            return false ; 
        }
        while(n>=1){
            if(n==1){
                return true ; 
            }
            if(n%2){
                return false ; 
            }
             n/=2;
        }
        return false ; 
    }
};

// NOW WITH RECURSION //

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1){
            return false ; 
        }
        if(n==1){
            return true; 
        }
        if(n%2){
            return false ; 
        }

    return isPowerOfTwo(n/2) ; 
    }
};
