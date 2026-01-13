class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> neg ; 
        int numneg = 0 ;
        for(int i = 0 ; i < n ; i ++){
            if(nums[i]<0){
                numneg ++ ;
                neg.push_back(nums[i]*nums[i]);
            }else{
                nums[i] = nums[i]*nums[i];
            }
        }
        int a = numneg , b = numneg -1 ; 
        int j = 0 ;
        while((b >= 0) && (a<n)) {
            if(neg[b]>=nums[a]){
                nums[j] = nums[a] ;
                a++ ;
                j++ ;
            }else{
                nums[j] = neg[b] ; 
                b-- ;
                j++ ;
            }
        }
        while(b>=0){
            nums[j] = neg[b] ; 
                b-- ;
                j++ ;
        }
        while(a<n){
            nums[j] = nums[a] ;
                a++ ;
                j++ ;
        }
        return nums ; 
    }
};
