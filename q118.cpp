class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer (numRows) ;
        int cans = 0;
        answer[cans++]= {1} ; 
        int count = 0 ; 
        vector<int> lastpush = {1}; 
        

        
        if(numRows >= 2 ){ 
            count = 1 ; 
            lastpush.push_back(1) ;
            answer[cans++]=lastpush;  
        }

        for (int i = 2 ; i < numRows  ; i ++) {
            for( int j = 1 ; j <= count ; j++){
            lastpush [j] = answer[count][j] +answer[count][j-1] ;
            }
            count ++ ; 
            lastpush.push_back(1);
            answer[cans++]=lastpush ; 
            
        }
        return answer ; 
    }
};
