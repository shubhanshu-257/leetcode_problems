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
    bool sol(TreeNode* root1,TreeNode* root2){
        if (root1!=NULL&& root2!=NULL){
            if (root1->val!=root2->val){
                return false;
            }
           return sol(root1->left,root2->right) &&
            sol(root1->right,root2->left);
            
        }
        else if (root1!=NULL || root2!=NULL){
            return false;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if (root==NULL){
            return true;
        }
        return sol(root->left,root->right);
    }
};