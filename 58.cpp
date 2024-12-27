class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
    while(~n && s[n]==' '){
        --n;
    }
    int j = n;
    while(~j && s[j] !=' '){
        --j;
    }
    return n-j;
    }
};
