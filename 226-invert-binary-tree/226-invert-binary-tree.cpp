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
    void invertTree1(TreeNode* &root) {
        if (root!=NULL){
            invertTree1(root->left);
            invertTree1(root->right);
            TreeNode* t=root->left;
            root->left=root->right;
            root->right=t;
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        if (root!=NULL){
            invertTree1(root);      }
        return root;
    }
};