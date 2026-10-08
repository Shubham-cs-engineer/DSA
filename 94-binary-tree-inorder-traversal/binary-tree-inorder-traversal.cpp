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
       void inorder(vector<int> &node,TreeNode* root){
        if(root==NULL)return;
           inorder(node,root->left);
           node.push_back(root->val);
            inorder(node,root->right);
       }

    vector<int> inorderTraversal(TreeNode* root) {
           vector<int> tree;
           inorder(tree,root);
           return tree;
    }
};