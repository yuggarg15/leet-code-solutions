class Solution {
public:
    int mySqrt(int x) {
        long long int st = 0 , end = x ; 
        long long int mid = 0 ;
    while (st<=end) {
         mid = st +(end - st)/2 ;
        if((mid*mid) == x){
         return mid ;
        }
        if((mid*mid)> x) {
        end = mid-1 ; 
        } if((mid*mid)<x){
        st = mid + 1 ;
        }
    } 
     if((mid*mid)> x) {
        mid -- ;
     }
    return mid ; 
    }
};
