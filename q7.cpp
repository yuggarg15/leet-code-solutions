class Solution {
public:
    int reverse(int x) {
        bool positive = true ;
        if(x < 0) {
            if(x == INT_MIN){
                return 0 ; 
            }
            x = - x ;
            positive = false ;
        }
       int a = x ; 
       int n = 0 ;
       while(a>0){
       a /= 10 ;
       n++ ; 
    }
       long long int sum = 0 ; 
       int b = 0 ;
       a = x ;
       
       for(int i = 0 ; i < n ; i ++) {
       b = a%10 ;
       a /= 10;

       sum = sum + b*pow(10,n-1-i) ;
       if(sum >= 2147483647 )  {
       return 0 ; 
       }
       if(sum <= -2147483648){
        return 0 ; 
       }
    }
    x = sum ; 
    if(positive == false ) {
        x = -x ;
    }
    return x ;
   
    }
};
