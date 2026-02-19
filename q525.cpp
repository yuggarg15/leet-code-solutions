class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map <int,int> m ;
        int diff = 0 ;
        int x = 0 , y = 0 ;
        int ans=0;
        m[0]=-1;
        for(int i = 0 ; i < nums.size(); i ++){
            if(nums[i]){
                y++;
            }else{
                x++;
            }
            diff = x-y ;
            if(!(m.count(diff))){
                m[diff]= i ;
            }
        }
        x = 0 ;
        y = 0;
        for(int i = 0 ; i < nums.size(); i ++){
            if(nums[i]){
                y++;
            }else{
                x++;
            }
            diff = x - y ;
            ans = max(ans,i - m[diff]);
        }
        return ans;
    }
};
