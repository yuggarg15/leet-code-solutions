class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> m ;
        int a = 0 , b = 0 ; 
        int n = grid.size()*grid[0].size() ;
        for(int i = 0 ; i < grid.size();i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                if(m.find(grid[i][j])==m.end()){
                    m.insert(grid[i][j]);
                }else{
                    a = grid[i][j];
                    break ; 
                }
            }
        }
        int sum = 0 ;
        for(int i = 0 ; i < grid.size();i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                sum += grid[i][j];
            }
        }
        b = a + (((n)*(n+1))/2) - sum ; 
        vector<int> ans ; 
        ans.push_back(a);
        ans.push_back(b);
        return ans ; 
     }
};
