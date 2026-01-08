class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int st = 0 , end = m - 1 ; 
        int mid1 = 0 ; 
        while(st<=end){
            mid1 = st + (end-st)/2 ;
            if(target >= matrix[mid1][0] && target <= matrix[mid1][n-1]){  
            break ; 
            }else if(matrix[mid1][0] <= target){
            st = mid1 + 1 ;
            } else {
            end = mid1 - 1 ; 
            }
        }
        int mid = 0 ;
            st = 0 ;
            end = n-1 ;
        
        while(st<=end){
            mid = st + (end-st)/2 ;
        if(matrix[mid1][mid] == target){
            break ; 
        }else if (matrix[mid1][mid] < target){
        st = mid + 1 ; 
        }else {
            end = mid - 1 ;
        }
        
        }
    if(matrix[mid1][mid] == target ){
    return true ; 
    }else{
        return false ; 
    }
        
    }
};
