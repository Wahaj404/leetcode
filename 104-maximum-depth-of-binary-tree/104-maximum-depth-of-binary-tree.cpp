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
    int mx(TreeNode* root) {
        return root == nullptr ? 0 : max(mx(root->left), mx(root->right)) + 1;
    }
public:
    int maxDepth(TreeNode* root) {
        return mx(root);
    }
};