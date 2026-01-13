class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string word = {word1[0],word2[0]};
        int min = 0 ;
        if(m>n){
            min = n ;
        }else{
            min = m ;
        }
        for(int i = 1 ; i < min ; i ++){
            word.push_back(word1[i]);
            word.push_back(word2[i]);           
        }
        if(min == n ){
            for(int i = min ; i < m ; i ++ ){
                word.push_back(word1[i]);
            }
        }
        if(min == m ){
            for(int i = min ; i < n ; i ++ ){
                word.push_back(word2[i]);
            }
        }
        return word ;
    }
};
