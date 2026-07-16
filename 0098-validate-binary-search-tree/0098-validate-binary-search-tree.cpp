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
    TreeNode * prev = NULL;
    bool fn(TreeNode * root){
        
        if(root == NULL) return true;
        if(fn(root->left) == false){
            return false;
        }
        if(prev != NULL && prev->val >= root->val){
            return false;
        }
        prev = root;
        if(fn(root->right) == false){
            return false;
        }
        return true;
    }
    bool isValidBST(TreeNode* root) {
        if (root == NULL) return true;
        return fn(root);
    }
};