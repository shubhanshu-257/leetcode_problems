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
    vector<int>v;
    int k=0;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        TreeNode* ans=NULL;
        TreeNode* t=NULL;
        for (int i=0;i<v.size();i++){
            
            TreeNode* n=new TreeNode(v[i]);
            if (t!=NULL){
               
                t->right=n;
                t->left=NULL;
                t=t->right;
            }
            else{
                t=n;
                ans=n;
            }
            
            
        }
        return ans;
    }
};