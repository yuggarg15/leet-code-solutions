class Solution {
public:
    int ispossible(vector<int> & nums, int k, int mid){
        int num = 0 ; 
        int i = 0 ; 
        while(i < nums.size()){
            int sum = 0 ;
            while(i < nums.size() && sum + nums[i] <= mid ){
                sum += nums[i];
                i++;
            }
            num++;
        }
        return num <= k ;
    }
    int splitArray(vector<int>& nums, int k) {
        int st = *max_element(nums.begin(),nums.end());
        int end = accumulate(nums.begin(),nums.end(),0);
        if(ispossible(nums,k,st)){
            return st ;
        }
        while(st+1<end){
            int mid = st + (end-st)/2;
            if(ispossible(nums,k,mid)){
                end = mid ;
            }else{
                st = mid;
            }
        }
        return end;
    }
};
