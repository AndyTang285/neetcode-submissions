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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true; 
        //depth first 
        //trick is to get the height of the left subtree and height of the right subtree of every node and compare. 
        int left_subtree_height = get_height(root->left);
        int right_subtree_height = get_height(root->right); 

        if (std::abs(left_subtree_height - right_subtree_height) > 1) return false; 

        return isBalanced(root->left) && isBalanced(root->right); 
    }

    int get_height(TreeNode* root) {
        
        if (root == nullptr) return 0; 
        return 1 + std::max(get_height(root->left), get_height(root->right));
    }

    
};
