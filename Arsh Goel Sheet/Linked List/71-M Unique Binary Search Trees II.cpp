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
 * for all varient we are creating thee all possible BSTs by making thereir left and right subtrees recurssively.
 * A GOOD QUESTION 🔥
 */
class Solution {
public:
    vector<TreeNode*> helper(int l, int r){
        if(l > r) return {NULL};
        vector<TreeNode*> ans;
        for(int i=l; i<=r; i++){
            vector<TreeNode*> lft = helper(l, i-1);
            vector<TreeNode*> rgt = helper(i+1, r);
            for(auto lt:lft){
                for(auto rt:rgt){
                    TreeNode* tp = new TreeNode(i);
                    tp -> left = lt;
                    tp -> right = rt;
                    ans.push_back(tp);
                }
            }
        }
        return ans;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return helper(1, n);
    }
};