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
 * We are creting an inorder transversal of the tree in a vector then it had to be sorted
 */
class Solution {
public:
    vector<int>v;
    void inOrder(TreeNode* root){
        if(!root) return;
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        inOrder(root);
        for(int i=0; i<v.size()-1; i++){
            if(v[i] >= v[i+1])
                return false;
        }
        return true;
    }
};