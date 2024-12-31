class Solution {
public:
    string simplifyPath(string path) {
        string ret,temp;
        vector<string> st;
        for(istringstream iss(path);getline(iss,temp,'/');){
            if(temp==".." && !st.empty()) st.pop_back();
            else if(temp=="." || temp==".." || temp=="") continue;
            else st.push_back(temp);
        }
        for(auto str:st){
            ret+="/"+str;
        }
        return ret.empty() ? "/":ret;
    }
};
