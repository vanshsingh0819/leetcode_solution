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
    int sum = INT_MIN;
    int height(TreeNode* root){
        if(root == NULL) return 0;
        int l = max(0,height(root->left));
        int r = max(0,height(root->right));
        sum = max(sum,l + r + root->val);
        return root -> val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        height(root);
        return sum;
    }
};