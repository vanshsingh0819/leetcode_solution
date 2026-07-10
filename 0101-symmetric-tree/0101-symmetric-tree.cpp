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
    bool fn(TreeNode* left,TreeNode* right){
        if(left == NULL && right == NULL) return true;
        if(left == NULL || right == NULL) return false;
        if(left->val != right->val){
            return false;
        }
        bool outside = fn(left->left ,right->right);
        bool inside = fn(left->right ,right->left);
        return outside && inside;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return fn(root->left,root->right);
    }
};