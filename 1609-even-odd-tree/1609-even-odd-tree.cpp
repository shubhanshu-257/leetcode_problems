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
    bool isEvenOddTree(TreeNode* root) {
        if (root==NULL){
            return true;
        }
        queue<TreeNode*>q1
            ,q2;
        int y=-1;
        int z=INT_MAX;
        q1.push(root);
        int k=0;
        while(!q1.empty() || !q2.empty()){
            //cout<<"2";
            if (k==0 &&( !q1.empty() || q2.empty())){
                TreeNode* t =q1.front();
                q1.pop();
                if (y<t->val && (t->val)%2!=0){
                    y=t->val;
                    
                }
                else{
                    return false;
                }
                if (t->left){
                    q2.push(t->left);
                }
                if (t->right){
                    q2.push(t->right);
                }
                if (q1.empty()){
                    k=1;
                }
                z=INT_MAX;
            }
            else{
                TreeNode* t =q2.front();
                
                q2.pop();
                if (z>t->val && (t->val)%2==0){
                    z=t->val;
                    
                }
                else{
                    
                    return false;
                }
                if (t->left){
                    q1.push(t->left);
                }
                if (t->right){
                    q1.push(t->right);
                }
                y=-1;
                if (q2.empty()){
                    k=0;
                }
            }
        }
        return true;
    }
};