class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0, ans = 0 ;
        unordered_map <int,int> basket;
        for(int j = 0 ; j <fruits.size(); j++){
            basket[fruits[j]]++;
            while(basket.size()>2){
                basket[fruits[i]]--;
                if(!basket[fruits[i]]){
                    basket.erase(fruits[i]);
                }
                i++;
            }
            ans = max(j-i+1,ans);
        }
        return ans;
    }
};
