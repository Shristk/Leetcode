/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* cur;
        st.push(root);
        while (!st.empty()) {
            cur = st.top();
            while (cur && cur->left) {
                st.push(cur->left);
                cur = cur->left;
            }
            cur = st.top(); st.pop();
            if (cur) ans.push_back(cur->val);
            if (st.size() > 0) st.top()->left = nullptr;
            if (cur && cur->right) st.push(cur->right);
        }
        return ans;
    }
};
