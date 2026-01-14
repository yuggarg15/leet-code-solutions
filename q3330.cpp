class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        vector<int> number;
        int current = 0 ;
        for(int i = 1 ; i < n ; i++){
            if(word[i]==word[i-1]){
                current++;
                if(i == (n-1)){
                number.push_back(current);
                }
            }else{
                if(current>0){
                number.push_back(current);
                }
                
                current = 0 ;
            }
        }
        int ans = 1;
    for(int i = 0 ; i < number.size(); i++){
        cout<<number[i];
        ans += number[i];
    }
    return ans;
    }
};

