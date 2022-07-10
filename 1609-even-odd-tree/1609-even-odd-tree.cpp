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
    bool isEvenOddTree(vector<TreeNode*> cur, int lev = 0) {
        for (int i = 0; i < cur.size(); ++i) {
            cout << cur[i]->val << '\n';
        }
        if (cur.empty()) return true;
        vector<TreeNode*> next;
        auto n = cur.size();
        for (int i = 0; i < n - 1; ++i) {
            if ((cur[i]->val & 1) == (lev & 1)) return false;
            if ((lev & 1) && cur[i]->val <= cur[i + 1]->val) return false;
            else if (!(lev & 1) && cur[i]->val >= cur[i + 1]->val) return false;
            if (cur[i]->left) next.push_back(cur[i]->left);
            if (cur[i]->right) next.push_back(cur[i]->right);
        }
        if ((cur.back()->val & 1) == (lev & 1)) return false;
        if (cur.back()->left) next.push_back(cur.back()->left);
        if (cur.back()->right) next.push_back(cur.back()->right);
        cout << 'i' << '\n';
        return isEvenOddTree(next, (lev + 1) & 1);
    }
public:
    bool isEvenOddTree(TreeNode* root) {
        return isEvenOddTree(vector<TreeNode*>{root});
    }
};