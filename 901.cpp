class StockSpanner {
public:
    stack<pair<int,int>> st; 
    int a = 0 ; 
    StockSpanner() {
        a = 0;
    }
    
    int next(int price) {
        while((!st.empty()) && (price>=st.top().second)){
            st.pop();
        }
        int ans = 0 ;
        if(st.empty()){
            ans = a+1;
        }else{
            ans = a - st.top().first ;
        }
        st.push({a,price});
        a++;
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
