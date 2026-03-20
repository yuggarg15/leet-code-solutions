class Solution {
public:
    bool ispossible(vector<int>& weights,long long int mid,int days, int maxe ){
        if(maxe>mid) return false ;
        int num = 0 ;
        int i = 0 ; 
        while(i< weights.size()){
            long long int sum = 0 ;
            while(i < weights.size() && ((sum+weights[i]) <= mid)){
                sum+=weights[i];
                i++;
            }
            num++;
        }
        return num <= days ;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long int end = 500*5*10000 ;
        long long int st = 0 ;
        int maxe = *max_element(weights.begin(),weights.end());
        while(end > st + 1){
            long long mid = st +(end-st)/2 ;
            if(ispossible(weights , mid , days , maxe)){
                end = mid ;
            }else{
                st = mid ;
            }
        }
        return end ;
    }
};
