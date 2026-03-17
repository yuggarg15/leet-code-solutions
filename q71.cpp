class Solution {
public:
    string simplifyPath(string path) {
        vector<char> str ; 
        int n = path.size();
        for(int i = 0 ; i < path.size(); i++){
            if(path[i]=='/'){
                while(path[i]=='/'){
                    i++;
                }
                i--;
                str.push_back('/');
            } else if(path[i]=='.'){
                if((i<n-1) && (path[i+1]=='.')){
                    if((i<n-2)&&(path[i+2]=='.')){
                        while(i<n && path[i]=='.'){
                            str.push_back('.');
                            i++;
                        }
                        i--;
                        continue;
                    }else{
                        if(!str.empty()){
                            if(str[str.size()-1]=='/'){
                                str.pop_back();
                            while((!str.empty()) && (str[str.size()-1]!= '/')){
                                str.pop_back();
                            }
                            }
                        }
                        i++;
                        continue;
                    }
                }else{
                    if(!str.empty() && str[str.size()-1]=='/') str.pop_back();
                    continue;
                }
            } else {
                str.push_back(path[i]);
            }
        }
        if(str.size()>1 && str[str.size()-1]=='/'){
            str.pop_back();
        }
        string s(str.begin(), str.end());
        return s; 
    }
};
