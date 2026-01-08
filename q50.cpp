class Solution {
public:
    double myPow(double x, int n) { 
        bool neg = false;
    long long int m  = n ;
    if(m<0){
    neg = true ;
    m = - m ;
    }
    double prod = 1 ;
    double sastaprod = x ;
    int multi = 0 ;
    while(m>0){
    multi = m%2 ;  
    if(multi == 0 ){
        sastaprod = sastaprod * sastaprod ; 
        m = m/2 ;
        continue ;
    }
    prod = prod * sastaprod ; 
    sastaprod = sastaprod*sastaprod ; 
    m = m/2 ;
    }
    if(neg){
        prod = 1/prod ;
    }
    return prod ; 
    }
};
