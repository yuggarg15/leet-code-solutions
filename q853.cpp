class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> v ; 
        int n = position.size();
        float a = 0 ;
        for(int i = 0 ; i < n ; i++){
            a = double(target - position[i])/speed[i];
            v.push_back({position[i],a});
        }
        sort(v.begin(),v.end());
        stack<pair<int,double>> st; 
        for(int i = n-1 ; i >= 0 ; i --){
            if((st.empty()) || (v[i].second > st.top().second)){
                st.push(v[i]);
            }
        }
        return st.size();
    }
};
