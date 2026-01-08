class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) { 
        int m = matrix.size() ; 
        int n = matrix[0].size();
        vector<int> mwala(200 , 1) ;
        vector<int> nwala(200 , 1) ; 
        for ( int i = 0 ; i < m ; i ++){
            for(int  j = 0 ; j < n ; j ++){
                if(matrix[i][j] == 0 ){
                    mwala[i] = 0;
                    nwala[j]= 0;
                }
            }
     
        }

        for (int i = 0; i < m ; i++){
            if (mwala[i] == 0 ){
                for (int j = 0 ; j< n ; j++){
                    matrix[i][j] =0;
                }
            }
        }
        for (int j = 0; j < n ; j++){
            if (nwala[j] == 0 ){
                for (int i = 0 ; i< m ; i++){
                    matrix[i][j] =0;
                }
            }
        }
    }
};
