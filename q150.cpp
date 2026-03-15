class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0 ; i < tokens.size() ; i++){
            if(tokens[i]=="+"){
                int x = st.top();
                st.pop();
                int y = x + st.top();
                st.pop();
                st.push(y);
            } else if(tokens[i]=="-"){
                int x = st.top();
                st.pop();
                int y = st.top() - x ;
                st.pop();
                st.push(y);
            } else if(tokens[i]=="*"){
                int x = st.top();
                st.pop();
                int y = x * st.top();
                st.pop();
                st.push(y);
            } else if(tokens[i]=="/"){
                int x = st.top();
                st.pop();
                int y = st.top() / x ; 
                st.pop();
                st.push(y);
            } else{
                int a = stoi(tokens[i]);
                st.push(a);
            }
        }
        return st.top();
    }
};
