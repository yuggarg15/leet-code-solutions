class Solution {
public:
    string largestEven(string s) {
        int n = s.size();
        int i = n-1 ;
        while((i>=0)&&((s[i]-'1')==0)){
            s.pop_back();
            i--;
        }
        if(i==-1){
            return "";
        }
        return s ; 
    }
};
