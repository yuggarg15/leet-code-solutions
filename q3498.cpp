class Solution {
public:
    int reverseDegree(string s) {
        int product = 0 ;
        for(int i = 0 ; i < s.size(); i++ ){
            product += (i+1)*(123-s[i]);
        }
        return product;
    }
};
