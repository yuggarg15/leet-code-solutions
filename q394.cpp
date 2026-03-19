class Solution {
public:
    string decodeString(string s) {
        vector<string> st;
        for (int i = 0; i < s.size(); i++) {
            string str;
            if (isdigit(s[i])) {
                while (isdigit(s[i])) {
                    str += s[i];
                    i++;
                }
                st.push_back(str);
                i--;
                continue;
            } else if (i < s.size() && isalpha(s[i])) {
                while (i < s.size() && isalpha(s[i])) {
                    str += s[i];
                    i++;
                }
                i--;
                st.push_back(str);
            } else if (s[i] == '[') {
                st.push_back("[");
            } else {
                string temp;
                while(st.back() != "["){
                    temp = st.back() + temp;
                    st.pop_back();
                }
                st.pop_back();
                int num = stoi(st.back());
                st.pop_back();
                while(num>0){
                    str+=temp;
                    num--;
                }
                st.push_back(str);
            }
        }
        string ans;
        for (int i = 0; i < st.size(); i++) {
            ans += st[i];
        }
        return ans;
    }
};
