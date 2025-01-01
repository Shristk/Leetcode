class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
        return false;
    }
    unordered_map<char, int> count_s;
    unordered_map<char, int> count_t;
    for (int i = 0; i < s.size(); i++) {
        count_s[s[i]]++;
        count_t[t[i]]++;
    }
    return count_s == count_t;
    }
};
