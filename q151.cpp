class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        string extra ; 
        int st = 0 , end = 0 ; 
        int wcount = 0 ; 
        for(int i = 0 ; i < s.length() ;i++){
        if(s[i]==' '){
            if(wcount>0){
                int a = end ;
                while(st<=a){
                    extra.push_back(s[a]);
                    a-- ;
                }
                extra.push_back(' ');
            }
            wcount = 0 ;
            continue ; 
        }else if((s[i]!=' ') && (wcount==0)){
            st = i ;
            end = i ;
            wcount++;
        }
        if(s[i]!=' '){
        end = i ;
        wcount++ ;
        }
        }
        extra.pop_back();
        int n = extra.size() ;
        for(int i = 0 ; i < n/2 ; i++){
            int temp = extra[i] ;
            extra[i] = extra[n-1-i] ;
            extra[n-1-i] = temp ; 
        }
        return extra ; 
    }
};
