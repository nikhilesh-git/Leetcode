/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    public:
    bool lcs(TreeNode* p, TreeNode* q, TreeNode* root, TreeNode*& ptr) {
        if (!root) return false;

        bool self = (root == p || root == q);
        bool left = lcs(p, q, root->left, ptr);
        bool right = lcs(p, q, root->right, ptr);

        if ((self && left) || (self && right) || (left && right)) {
            ptr = root;
            return true;
        }

        return self || left || right;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode * ptr;
        lcs(p,q,root,ptr);
        return ptr;
    }
};