class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set <char> letters ;
        for(int i = 0 ; i < allowed.size() ; i ++){
            letters.insert(allowed[i]);
        }
        int count = 0 ;
        for(int i = 0 ; i < words.size() ; i ++){
            bool flag = true ; 
            for(int j = 0 ; j < words[i].size(); j ++){
                if(!letters.count(words[i][j])){
                    flag = false ; 
                }
            }
            if(flag){
                count++;
            }
        }
        return count ; 
    }
};
