class Solution {
public:
    int arrangeCoins(int n) {
        int st =  0 , end  = n ;
        int x = 0 ;
        long long int mid=0 ;
        while(st<=end){
            mid = st + (end-st)/2 ;
        if((mid*(mid+1)/2) == n){
            return mid ; 
        }
        if((mid*(mid+1)/2) >n){
            end = mid - 1 ;
        }else{
            st = mid + 1 ;
        }
        }
        if((mid*(mid+1)/2)>n) {
            mid--;
        }
        return mid ;
    }
};
