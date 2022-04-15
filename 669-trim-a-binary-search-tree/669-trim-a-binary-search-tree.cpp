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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (root!=NULL){
            if (root->val<low){
                root=trimBST(root->right,low,high);
            }
            else if (root->val>high){
                root=trimBST(root->left,low,high);
            }
            else{
            TreeNode* l=root->left;
            TreeNode* r=root->right;
            if (l){
                if (l->val<low ){
                    root->left=trimBST(l->right,low,high);
                }
                else if (l->val>high){
                    root->left=trimBST(l->left,low,high);
                }
                else{
                    trimBST(l,low,high);
                    trimBST(r,low,high);
                }
            }
            if (r){
                if (r->val>high){
                    root->right=trimBST(r->left,low,high);
                }
                else if (r->val<low){
                    root->right=trimBST(r->right,low,high);
                }
                else{
                    trimBST(l,low,high);
                    trimBST(r,low,high);
                }
            }}
        }
        return root;
        
    }
};