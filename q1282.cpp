class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> m ;
        for(int i = 0 ; i < groupSizes.size() ; i ++){
            m[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans ;
        for(auto [k,e] : m){
            for(int i = 0 ; i < e.size() ; i += k){
                vector<int> temp;
                for(int j = i ; j < i+k ; j ++){
                    temp.push_back(e[j]);
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
