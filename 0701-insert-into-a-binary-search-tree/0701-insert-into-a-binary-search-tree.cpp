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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode * newNode=new TreeNode(val);
        if(root==NULL) return newNode;
        TreeNode *ptr=root,*prevptr=NULL;
        while(ptr!=NULL){
            prevptr=ptr;
            if(val<ptr->val){
                ptr=ptr->left;
            }
            else{
                ptr=ptr->right;
            }
        }
        
        if(val<prevptr->val){
            prevptr->left=newNode;
        }
        else{
            prevptr->right=newNode;
        }
        return root;
    }
};