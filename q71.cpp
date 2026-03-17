class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v ;
        int n = path.size();
        for(int i = 0 ; i < n; i++){
            if(path[i]=='/') continue;
            string str ; 
            while( i < n && path[i]!='/'){
                str.push_back(path[i]);
                i++;
            }
            v.push_back(str);
        }
        vector<string> st;
        for(int i = 0 ; i < v.size(); i++){
            if(v[i]=="."){
                continue;
            }else if (v[i]==".."){
                if(st.size()) st.pop_back();
            } else{
                st.push_back(v[i]);
            }
        }
        string ans ;
        for(int i = 0 ; i < st.size(); i++){
            ans.push_back('/');
            ans += st[i];
        }
        if(ans.empty() && (!path.empty())){
            ans.push_back('/');
        }
        return ans ;
    }
};
