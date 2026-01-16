class Solution {
public:
    int maxFreqSum(string s) {
        vector<pair<int,int>> freq(26,{0,0}); 
        for(int i = 0 ; i < s.size() ; i ++){
            freq[s[i]-'a'].second++;
        }
        int a = 0 , b = 0 ; 
        for(int i = 0 ; i < freq.size(); i ++){
            if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20){
                if(freq[i].second>a){
                    a = freq[i].second;
                }
            }else{
                if(freq[i].second>b){
                    b = freq[i].second;
                }
            }
        }
        return a+b ; 
    }
};
