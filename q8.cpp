class Solution {
public:
    int myAtoi(string s) {
        int i = 0 ; 
        int n = (int)s.length();
        int sign = 1 ;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            sign = -1 ;
            i++;
        }else if (s[i]=='+'){
            i++ ;
        }
        long long maxInt = INT_MAX;
        long long minInt = -(long long)INT_MIN;

        long long ans = 0;
        for (;i < n && isdigit(s[i]); i++) {
            int d = s[i]-'0';
            if(sign==1){
                if((maxInt-d)/10 < ans ){
                    return INT_MAX ;
                }
            }else{
                if((minInt-d)/10 < ans ){
                    return INT_MIN ;
                }
            }
            
            ans = ans*10 + d ;
            
        }
        return (ans*sign) ;
    }
};
