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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = root;
        TreeNode* node = root;
        if(root ==  NULL) return new TreeNode(val);
        while(temp != NULL){
            if(temp->val > val){
                node = temp;
                temp = temp->left;
            }
            else if (temp->val < val){
                node = temp;
                temp = temp->right;
            }
        }
        TreeNode * newNode = new TreeNode(val);
            if(node->val > val){
                node->left = newNode;
            }
            else{
                node->right = newNode;
            }
            return root;
    }
};