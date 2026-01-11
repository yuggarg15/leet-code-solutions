class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = true; 
        int n = digits.size();
        for(int i = n-1 ; i>=0 ; i--){
            if(digits[i]!=9){
                flag = false;
            }
        }
        if(flag==true){
            digits.push_back(0);
            digits[0] = 1;
            for(int i = 1 ; i < n ; i++){
                digits[i] = 0 ;
            }
            return digits ; 
        }
        int consistent = true ; 
        if(digits[n-1] != 9){
            digits[n-1] += 1 ;
        }else{
            for(int i = n-1 ; i >=0 ; i--){
                if(digits[i]==9){
                    digits[i]=0;
                }else{
                    digits[i] += 1 ; 
                    consistent = false ; 
                }
                if(!consistent){
                    break ;
                }
            }
        }
        return digits ; 
    }
};
