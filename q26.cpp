class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 1 ; 
        bool zer = true ;
        vector<int>dup (n, 0) ; 
        dup[0] = nums[0];
       
        for (int i = 1 ; i < n ;i++){         
         if(nums[i] != dup[k-1]) {
            
                dup[k] = nums[i] ;
                k++ ;
                continue ;
         }
         
        }
        for(int i = 0 ; i < k ; i++) {
            nums[i] = dup[i] ;
        }
 
                
        return k  ;
    }
    
};
