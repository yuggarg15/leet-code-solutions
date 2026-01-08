class Solution {
public:
    int romanToInt(string s) {
        int sum = 0; 
        int n  = s.length() ; 
        for(int i = 0 ; i < n ; i ++){
            if(s[i] == 'M'){
                sum += 1000 ;
            }
            if(s[i] == 'D'){
                sum += 500 ;
            }
            if(s[i] == 'L'){
                sum += 50 ;
            }
            if(s[i] == 'V'){
                sum += 5 ;
            }
            if(s[i] == 'I'){
                if(i<(n-1)){
                    if((s[i+1]== 'V') || (s[i+1]== 'X') ){
                        sum--; 
                    }else{
                        sum++ ; 
                    }
                }else{
                    sum++ ; 
                }
            }
            if(s[i] == 'X'){
                if(i<(n-1)){
                    if((s[i+1]== 'L') || (s[i+1]== 'C') ){
                        sum-= 10 ; 
                    }else{
                        sum += 10 ; 
                    }
                }else{
                    sum+=10 ; 
                }
            }
            if(s[i] == 'C'){
                if(i<(n-1)){
                    if((s[i+1]== 'D') || (s[i+1]== 'M') ){
                        sum-=100; 
                    }else{
                        sum+=100 ; 
                    }
                }else{
                    sum+=100 ; 
                }
            }
        }
        return sum ; 
    }
};
