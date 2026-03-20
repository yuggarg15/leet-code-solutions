class Solution {
public:
    bool ispossible(vector<int>& piles, int mid , int h){
        long long int sum = 0 ;
        for(int i = 0 ; i < piles.size(); i ++){
            sum += (piles[i] + mid - 1)/ mid ;
        }
        if(sum<= h){
            return true ;
        }
        return false ; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int end = *max_element(piles.begin(), piles.end()) ;
        long long int st = 0 ;
        long long int mid = 0 ;
        while(end > st + 1){
            mid = st +(end - st)/ 2 ;
             if(ispossible(piles,mid,h)){
                end = mid ;
             }else{
                st = mid ;
             }
        }
        return end ;
    } 
};
