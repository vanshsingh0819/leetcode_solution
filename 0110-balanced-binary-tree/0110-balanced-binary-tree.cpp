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
    int fn(TreeNode* root){
        if(root == NULL) return 0;
        int l = fn(root -> left);
        int r = fn(root -> right);
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        int lh = fn(root -> left);
        int rh = fn(root -> right);
        if(abs(lh-rh) > 1) return false;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        if(!left || !right)
        return false;
        return true;
    }
};