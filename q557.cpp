class Solution {
public:
    string reverseWords(string s) {
        int n = s.size() ; 
        int a = 0 , b = 0 ; 
        int temp = 0 ;
        cout << n << endl ; 
        for(int i = 0 ; i < n ; i ++){
            if(s[i] == ' '){
            b = i-1 ;
            while(a<b){
                temp = s[a] ;
                s[a] = s[b];
                s[b] = temp ; 
                
                a++;
                b--;
            }
            a = i+1;
            }
            if(i == n-1){
            b = n-1 ; 
            while(a<b){
                temp = s[a] ;
                s[a] = s[b];
                s[b] = temp ;
                a++;
                b--;
            }
            }
        }
        return s ; 
    }
};
