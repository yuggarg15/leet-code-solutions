class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int a = prices[0];
        int b = prices[0];
        int p = 0;
        for(int i = 0 ; i < n ; i ++){
        if(prices[i] < a){
            a = prices[i];
        }
        b = prices[ i ] ;
        if((b-a)>p){
            p = b-a ;
        }
        }
        return p;
    }
};
