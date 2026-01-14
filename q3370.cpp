class Solution {
public:
    int smallestNumber(int n) {
        int pow = 0 ;
        while(n>0){
            n/=2;
            pow++;
        }
        int ans = 1;
        for(int i = 0 ; i < pow ; i ++){
            ans *= 2 ; 
        }
        return ans - 1 ; 
    }
};
