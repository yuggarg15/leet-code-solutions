class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "" ; 
        bool sabmaihai = true ;
        int count = 0 ; 
        cout<< strs.size() ;
        while(sabmaihai == true){            
            for(int i = 0 ; i < strs.size(); i ++){
                if(count >= strs[i].size()){
                    sabmaihai = false ;
                    break ; 
                }
                if(strs[i][count] == strs[0][count] ){
                    continue;
                }else{
                    sabmaihai = false ; 
                }
            }
            if(sabmaihai){
                ans.push_back(strs[0][count]);
                count++ ;
            }
        }
        return ans ; 
    }
};
