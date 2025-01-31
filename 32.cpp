class Solution {
public:
    int longestValidParentheses(string s) {
         int n = s.size();
        vector<int> dp(n, 0);
        int maxLen = 0;
        for(int i = 1; i < n; ++i){
            if(s[i] == ')'){
                if(s[i-1] == '('){
                    dp[i] = (i >= 2 ? dp[i-2] : 0) + 2;
                }else{
                    if(i-1-dp[i-1] >= 0 && s[i-1-dp[i-1]] == '('){
                        dp[i] = (i-1-dp[i-1]-1 >= 0 ? dp[i-1-dp[i-1]-1] : 0) + 1 + dp[i-1] + 1;
                    }
                }
            }
            maxLen = max(maxLen, dp[i]);
        }
        return maxLen;
    }
};
