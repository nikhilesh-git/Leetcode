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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        map<int,int> mpp;
        queue<pair<int,TreeNode*>> q;
        q.push({0,root});
        while(!q.empty()){
            int height=q.front().first;
            TreeNode * node=q.front().second;
            q.pop();
            mpp[height]=node->val;
            if(node->left!=NULL){
                q.push({height+1,node->left});
            }
            if(node->right!=NULL){
                q.push({height+1,node->right});
            }
        }
        vector<int> res;
        for(auto &it:mpp){
            res.push_back(it.second);
        }
        return res;
    }
};