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
    TreeNode* fn(TreeNode* root){
        if(root->left == NULL) return root->right;
        if(root->right == NULL) return root->left;
        TreeNode* leftchild = root->left;
        TreeNode* rightchild = root->right;
        TreeNode* lastchild = leftchild;
        while(lastchild->right != NULL){
            lastchild = lastchild->right;
        }
        lastchild->right = rightchild;
        return leftchild;
    }
  
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* temp = root;
        TreeNode* node = root;
        if(root == NULL) return NULL;
        if(root->val == key) return fn(root);
        while(temp != NULL){
            if(temp ->val > key){
                if(temp->left != NULL && temp->left->val == key){
                    temp->left = fn(temp->left);
                    break;
                }
                else{
                    temp= temp->left;
                }
            }
            else{
                if(temp->right != NULL && temp->right->val == key){
                    temp->right = fn(temp->right);
                    break;
                }
                else{
                    temp= temp->right;
                }
            }
        }
        return root;
    }
};