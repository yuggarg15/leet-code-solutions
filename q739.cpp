class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st ; 
        vector<int> ans ; 
        int n = temp.size();
        reverse(temp.begin(), temp.end());
        for(int i = 0 ; i < n ; i ++){
            if(st.empty()){
                st.push(i);
                ans.push_back(0);
                continue;
            }else{
                while((!st.empty()) && (temp[st.top()]<=temp[i])){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(0);
                    st.push(i);
                    continue;
                }else if(temp[st.top()]>temp[i]){
                    ans.push_back(i-st.top());
                    st.push(i);
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
