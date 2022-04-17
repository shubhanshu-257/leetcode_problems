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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if (root==NULL){
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int cnt=q.size();
            vector<int>v1;
            while(cnt--){
                TreeNode* t=q.front();
                q.pop();
                if (t->left!=NULL){
                    q.push(t->left);
                }
                if (t->right!=NULL){
                    q.push(t->right);
                }
                v1.push_back(t->val);
            }
            v.push_back(v1);
        }
        return v;
    }
};