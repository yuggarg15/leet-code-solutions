class Solution {
public:
    bool isBalanced(string num) {
    int  sum = 0 ;
    for(int i = 0; i < num.size(); i+=2){
        sum+=(num[i] -'0');
    }
    for(int i = 1; i <num.size(); i+=2){
        sum-= (num[i] - '0');
    }
    if(!sum){
        return true;
    }else{
        return false;
    }
    }
};
