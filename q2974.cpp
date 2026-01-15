class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
    int n = nums.size();
    vector<int> arr(n, 0);
    sort(nums.begin(),nums.end());
    int flag = 1 ;
    if(!(n%2)){
    for(int i = 0 ; i <n ; i++){
        arr[i+flag] = nums[i];
        if(flag==1){
            flag = -1 ;
        }else{
            flag = 1 ;
        }
    }
    }else{
        for(int i = 0 ; i < n-1 ; i++){
        arr[i+flag] = nums[i];
        if(flag==1){
            flag = -1 ;
        }else{
            flag = 1 ;
        }
    }
    arr[n-1]=nums[n-1];
    }
    return arr;
    }
};
