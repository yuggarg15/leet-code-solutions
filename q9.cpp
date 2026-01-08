class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false ;
        }
        int b = true ;
    vector<int> vec(0) ;
    for(int i = 0 ; x>0;i++){
    vec.push_back(x%10) ;
    x/=10 ; 
    }
    
    for(int i = 0 ; i < (vec.size()/2);i++){
        if(vec[i]!=vec[vec.size() - i - 1 ]) {
        b = false;
    
    }
    }
    return b ; 
}
