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
    int findLeftHeight(TreeNode *root){
        int height=0;
        while(root!=NULL){
            root=root->left;
            height++;   
        }
        return height;
    }

    int findRightHeight(TreeNode *root){
        int height=0;
        while(root!=NULL){
            root=root->right;
            height++;   
        }
        return height;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lh=findLeftHeight(root->left);
        int rh=findRightHeight(root->right);
        if(lh==rh){
            return pow(2,(lh+1))-1;
        }
        int leftNodes=countNodes(root->left);
        int rightNodes=countNodes(root->right);
        return  leftNodes+rightNodes+1;
    }
};