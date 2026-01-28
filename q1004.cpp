class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0 , j = 0 ; 
        int n = nums.size();
        int ans = 0;
        int count = 0;
        int maxans = 0;
        while(i<n && j<n){
            if(nums[j]==1){
                j++;
                ans = j-i;
                if(ans>maxans){
                    maxans = ans;
                }
            }else{
                count++;
                if(count<=k){
                    j++;
                    ans = j -i ;
                    if(ans>maxans){
                        maxans = ans ; 
                    }
                }else{
                    j++;
                    while(count>k){
                        if(nums[i]==0){
                            count--;
                        }
                        i++;
                    }
                    ans = j - i ;
                    if(ans>maxans){
                        maxans = ans;
                    }
                }
            }
        }
        return maxans;
    }
};
