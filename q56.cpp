class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> answer ;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        bool newint = true ;
        int maximum = -1 ; 
        vector<int> temp = {0,0} ;
        for(int i = 0 ; i < n ; i ++ ){           
            if(newint){
                temp[0] = intervals[i][0];
                newint = false ; 
            }
            if(intervals[i][1] >= maximum ){
                maximum = intervals[i][1];
            }
            if((i<n-1) &&(maximum >= intervals[i+1][0])){
                continue ;
            }else if (i == n-1){
                temp[1] = maximum;
                answer.push_back(temp) ;
            }else{
                temp[1] = maximum ;
                maximum = intervals[i+1][1] ;
                answer.push_back(temp) ;
                newint = true ; 
            }
            
        }
        
        return answer ; 
    }
};
