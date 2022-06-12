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
 * A simple DFS Inordered transversal every time we visit a nde we check is stack is at k size or not if its then return else push the val of the node;
 */
class Solution {
public:
    int ans;
    stack<int> s;
    void inOrder(TreeNode* root,int &k){
        if(!root) return;
        inOrder(root->left, k);
        s.push(root->val);
        if(s.size() == k){
            ans = s.top();
            return;
        }
        inOrder(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        inOrder(root, k);
        return ans;
    }
};