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
 * A simple recurssive function,
 * first we are checking if the current node is leaf one then if is satisfy the target sum the true else false
 * and if its not a leaf node then return the reurssive cal for left and right node by passing new targetSum = tatgetSum - root->val;
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int t) {
        if(!root) return false;
        if(root->left == NULL && root->right == NULL){
            if(t - root->val == 0)
                return true;
            return false;
        }
        return hasPathSum(root->left, t-root->val) || hasPathSum(root->right, t-root->val);
    }
};