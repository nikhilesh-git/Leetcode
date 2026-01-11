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
    void traverse(TreeNode *root,TreeNode *par,unordered_map<TreeNode *,TreeNode*> &parent){
        if(root==NULL) return;
        parent[root]=par;
        traverse(root->left,root,parent);
        traverse(root->right,root,parent);

    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode *,TreeNode *> parent;
        //map parents
        TreeNode *par=NULL;
        traverse(root,par,parent);
        queue<TreeNode *> q;
        q.push(target);
        unordered_map<TreeNode *,bool> visited;
        while(!q.empty()){
            int n=q.size();
            if(k==0){
                break;
            }

            for(int i=0;i<n;++i){
                TreeNode * curr=q.front();
                q.pop();
                visited[curr]=true;
                if(curr->left!=NULL && visited.find(curr->left)==visited.end()) q.push(curr->left);
                if(curr->right!=NULL&& visited.find(curr->right)==visited.end()) q.push(curr->right);
                if(parent[curr]!=NULL && visited.find(parent[curr])==visited.end()) q.push(parent[curr]);            
            }
            k--;
        }

        if(k!=0){
            return {};
        }
        vector<int> res;
        while(!q.empty()){
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;
    }
};