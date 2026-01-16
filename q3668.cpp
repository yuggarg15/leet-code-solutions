class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map <int,int> positions ; 
        for(int i = 0 ; i < friends.size(); i ++){
            positions[friends[i]]++;
        }
        int a = 0 ;
        for(int i = 0 ; i < order.size(); i++){
            if(position[order[i]]){
                friends[a] = order[i];
                a++;
            }
        }
        return friends ; 
    }
};
