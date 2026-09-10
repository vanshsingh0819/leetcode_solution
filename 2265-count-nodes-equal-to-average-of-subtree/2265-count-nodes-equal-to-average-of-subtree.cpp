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
    int sum(TreeNode* root){
        if(root == NULL) return 0;
        int nodesum = root->val + sum(root->left) + sum(root->right);
        return nodesum;
    }
    int cnt(TreeNode* root){
        if(root == NULL) return 0;
        int count = 1 + cnt(root->left) + cnt(root->right);
        return count;
    }
    int averageOfSubtree(TreeNode* root) {
        if(root == NULL) return 0;
        int ans = 0;
        int nodesum = sum(root);
        int nodecount = cnt(root);

        int average = nodesum/nodecount;
        if(root->val == average){
            ans++;
        }
        ans = ans + averageOfSubtree(root->left);
        ans = ans + averageOfSubtree(root->right);
        return ans;
    }
};