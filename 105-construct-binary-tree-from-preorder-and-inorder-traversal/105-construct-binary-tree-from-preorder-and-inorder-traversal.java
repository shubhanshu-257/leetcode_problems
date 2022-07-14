/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        HashMap<Integer,Integer>hm = new HashMap<>();
        for (int i=0;i<inorder.length;i++){
            hm.put(inorder[i],i);
        }
        return rec(preorder,0,preorder.length-1,inorder,0,inorder.length-1,hm);
    }
    public TreeNode rec(int[] preorder,int prestart,int preend,int[] inorder,int instart,int inend,HashMap<Integer,Integer>hm){
        if (prestart>preend || instart>inend){
            return null;
        }
        
        TreeNode root = new TreeNode(preorder[prestart]);
        int x1= hm.get(root.val);
        int x=x1-instart;
        int y=x1-prestart;
        root.left = rec(preorder,prestart+1,prestart+x,inorder,instart,instart+x-1,hm);
        root.right=rec(preorder,prestart+x+1,preend,inorder,x1+1,inend,hm);
        
        return root;
        
    }
}