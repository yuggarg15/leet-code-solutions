class Solution {
public:
    bool isValid(string s) {
        stack<char> st ; 
        int count1 = 0;
        int count2=0;
        for(int i = 0 ; i<s.size();i++){
            if(s[i]=='{'||s[i]=='['||s[i]=='('){
                count1++;
                st.push(s[i]);
            }else{
                count2++;
                bool same = false;
                if(!(st.empty())){
                    if(st.top()=='{' && s[i]=='}'){
                        same= true;
                    }
                    if(st.top()=='[' && s[i]==']'){
                        same= true;
                    }
                    if(st.top()=='(' && s[i]==')'){
                        same= true;
                    }
                }
                if((!(st.empty()))&&same){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
    if(count2==count1){
        return true;
    }
    return false;
    }
};
