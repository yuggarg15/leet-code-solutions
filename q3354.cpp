class Solution {
public:
    int countValidSelections(vector<int>& nums) {
    int answer = 0 ;
    for(int i = 0 ; i < nums.size(); i++){
        if(!nums[i]){
            int sum = 0 ; 
            for(int j = 0 ; j < i ; j++){
                sum+=nums[j];
            }
            for(int j = i+1 ; j < nums.size() ; j++){
                sum-=nums[j];
            }
            if((sum ==0)){
                answer+=2;
            }
            if((sum ==1)||(sum ==-1)){
                answer++;
            }
        }
    }
    return answer ; 
    }
};
