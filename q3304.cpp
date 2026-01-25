class Solution {
public:
    char kthCharacter(int k) {
        string str = "a" ; 
        int n = 0 ; 
        int copy = k ; 
        while(copy > 0){
            copy/=2;
            n++;
        }
        for(int i = 0 ; i <=n ; i ++){
            for(int j = 0 ; j < pow(2,i); j++){
                char value;
                if(str[j]=='z'){
                    value = 'a';
                }else{
                    value = str[j] + 1 ;
                }
                str.push_back(value);
            }
        }
        return str[k-1];
    }
};
