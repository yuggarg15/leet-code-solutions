class Solution {
public:
    int mirrorDistance(int n) {
        long long int num1 = n ;
        long long int num2 = 0 ;
        while(n>0){
            num2 = num2*10 + n%10 ; 
            n/=10 ; 
        }
        if(num2-num1>0){
            return num2-num1;
        }else{
            return num1-num2; 
        }
    }
};
