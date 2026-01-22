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
    TreeNode *helper(TreeNode *root){
        if(root->left==NULL) return root->right;
        if(root->right==NULL) return root->left;

        TreeNode * curr=root->left;
        while(curr->right!=NULL) curr=curr->right;
        curr->right=root->right;
        return root->left;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;

        //if root->val is the key
        if(root->val==key){
            return helper(root);
        }
        
        TreeNode * ptr=root,*par=NULL;

        while(ptr!=NULL){
            if(ptr->val>key){
                if(ptr->left!=NULL && ptr->left->val==key){
                    ptr->left=helper(ptr->left);
                    break;
                }
                else{
                    ptr=ptr->left;
                }
            }
            else{
                if(ptr->right!=NULL && ptr->right->val==key){
                    ptr->right=helper(ptr->right);
                    break;
                }
                else{
                    ptr=ptr->right;
                }
            }
        }
        return root;
    }
};