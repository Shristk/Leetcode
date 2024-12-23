class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string res="";
        int n=strs.size();
        for (int i=0; i<strs[0].size(); i++) { 
            char c = strs[0][i];
            for (int j=1; j<n; j++) { 
                if (i>=strs[j].size() || strs[j][i] != c) {
                    return res; 
                }
            }
            res += c; 
        }
        return res;
    }
};
