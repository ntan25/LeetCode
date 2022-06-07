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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //determine lower value 
        TreeNode* l = nullptr; 
        TreeNode* h = nullptr; 
        if (p->val < q->val) l = p, h = q;
        else h = p, l = q; 
        
        return helper(root, l, h); 
    }
    TreeNode* helper(TreeNode* root, TreeNode* low, TreeNode* high){
        if(root->val == low->val || root->val == high->val) return root; 
        if(root->val >= low->val && root->val <= high->val) return root; 
        else if (root->val >= low->val && root->val >= high->val){
            return helper(root->left, low, high);
        }
        else{
            return helper(root->right, low, high);
        }
        
    }
};