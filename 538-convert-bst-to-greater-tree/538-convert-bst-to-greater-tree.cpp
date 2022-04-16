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
    int x=0;
    int convertBST1(TreeNode* root){
        if (root!=NULL){
           int l=convertBST1(root->right);
            root->val=x+root->val;
            x=root->val;
            int r=convertBST1(root->left);
            if (r!=0){
            x=r;}
        }
        return x;
    }
    TreeNode* convertBST(TreeNode* root) {
        convertBST1(root);
        return root;
    }
};