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
 * A simpe PreOrder to List creation, where O(n) space complexity but O(n) time complexity as well;
 * There is one another approach where we merger while preorder iteration but its less time efficient but O(1) space complexity with O(n) time complexity;
 */
class Solution {
public:
    
    void preOrdered(TreeNode* root, vector<TreeNode*> &v){
        if(root == NULL) return;
        v.push_back(root);
        // cout << root->val << " ";
        preOrdered(root->left, v);
        preOrdered(root->right, v);
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        vector<TreeNode*> v;
        preOrdered(root, v);
        root->left = NULL;
        for(int i=1; i<v.size(); i++){
            root->right = v[i];
            v[i]->left = NULL;
            root = root->right;
        }
    }
};