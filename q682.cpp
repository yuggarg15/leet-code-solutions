class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0 ; 
        stack<int> st ; 
        for(int i = 0 ; i < ops.size(); i++){
            if(ops[i]=="C"){
                sum -= st.top();
                st.pop();
            }else if(ops[i]=="D"){
                int d = 2*st.top();
                sum += d;
                st.push(d);
            } else if(ops[i]=="+"){
                int top = st.top();
                st.pop();
                int second = st.top();
                int add = top + second; 
                sum += add; 
                st.push(top);
                st.push(add);
            } else{
                int a = stoi(ops[i]);
                st.push(a);
                sum+=a;
            }
        }
        return sum ; 
    }
};
