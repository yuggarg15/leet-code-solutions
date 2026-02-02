class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0 ;
        int diff=0;
        for(int i = 0 ; i< s.size()-1 ; i++){
            diff = s[i+1]-s[i];
            if(diff<0){
                diff = -diff;
            }
            sum+=diff;
        }
        return sum;
    }
};
