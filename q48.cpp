class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int cn = n ;
        int temp1 = 0 ; 
        int temp2 = 0 ; 
        for(int r = 0 ; r < n/2 ; r++ ){
            int i = r ;
            for(int j = r ; j < n-r-1 ; j++ ){
            
            int a = i ; 
            int b = j ;
            int farzi = 0 ; 
            temp1 = matrix[a][b];
            for(int z = 0 ; z<4 ; z++){
            temp2 = matrix[b][n-1-a];
            matrix[b][n-1-a] = temp1 ; 
            temp1 = temp2 ; 

            farzi = b ;
            b = n-1-a ;
            a = farzi ;

            }
            }
            }
        }

    
};
