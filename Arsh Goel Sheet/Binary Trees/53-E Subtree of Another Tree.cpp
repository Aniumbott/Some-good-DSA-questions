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
 * 
 * A simple recursive approach in which check every root element with subroot and if they got same then it will check weather they are same or not,
 * If they are same till the end then only it will return true or it will check for the other root element;
 */
class Solution {
public:
    bool isSame(TreeNode* root, TreeNode* subroot){
        if(!root || !subroot) return root == subroot;
        if(root->val != subroot->val) return false;
        return isSame(root->left, subroot->left) && isSame(root->right, subroot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(!root || !subroot) return root == subroot;
        if(isSame(root, subroot)) return true;
        else return isSubtree(root->left, subroot) || isSubtree(root->right, subroot);
    }
};