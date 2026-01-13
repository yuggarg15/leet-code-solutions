class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int once = 0 ;
        int n = nums.size();
        int i = 0 ;
        int dip = 0 ;
        while(i<n-1){
        if(nums[i+1] <= nums[i] ){
            once ++ ;
            if(once ==1){
                dip = i ;
            }
            if(once>1){
                break ;
            }
        }  
        i++ ;    
        } 
        if(once ==0 ) {
            return true ;
        }else if (once == 1 ) {
            if((n>2) && ((dip <= (n-3)) &&(nums[dip]<nums[dip+2]))){
                return true ;
            }else if((dip>0) && (nums[dip-1]<nums[dip+1])){
                return true ;
            }else if ((dip==0) || ( dip == n-2) ){
                return true ;
            }else{
                return false ;
            }
            
        }else{
            return false ;
        }      
        
    }
};
