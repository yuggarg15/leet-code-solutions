class Solution {
public:
    int smallestNumber(int n, int t) {
    for(int i = 0 ; ; i++){
        int x = n + i ;
        int product = 1 ;
        while(x>0){
            product *= (x%10);
            x/=10;
        }
        if(!(product % t)){
            return n+i;
        }
    }
    }
};
