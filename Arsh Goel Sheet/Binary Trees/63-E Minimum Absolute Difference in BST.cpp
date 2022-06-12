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
 * We are iterating through DFS Inorder where we update the minimum accordingly.
 */
class Solution {
public:
    void helper(TreeNode *root, TreeNode* &pre, int &diff){
        if(!root) return;
        helper(root->left, pre, diff);
        if(pre) diff = min(diff, abs(root->val - pre->val));
        pre = root;
        helper(root->right, pre, diff);
    }
    int getMinimumDifference(TreeNode* root) {
        int diff = INT_MAX;
        TreeNode *pre = NULL;
        helper(root, pre, diff);
        return diff;
    }
};