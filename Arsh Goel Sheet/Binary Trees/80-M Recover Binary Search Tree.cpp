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
 * We are going throgh the inorder transversal and checking if it is sorted then swap those two values;
 */
class Solution {
public:
    TreeNode *a=NULL, *b=NULL;
    void helper(TreeNode *root, TreeNode *&pre){
        if(root->left) helper(root->left, pre);
        
        if(pre && (pre->val > root->val)){
            if(!a) a = pre;
            b = root;
        }
        
        pre = root;
        
        if(root->right) helper(root->right, pre);
    }
    void recoverTree(TreeNode* root) {
        if(!root) return;
        TreeNode* pre=NULL;
        helper(root, pre);
        swap(a->val, b->val);
    }
};