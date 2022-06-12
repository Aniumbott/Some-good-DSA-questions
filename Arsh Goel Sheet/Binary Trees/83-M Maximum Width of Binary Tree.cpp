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
 * We are using deque for bfs instead of queue cause in width at any level the nulls between non nulls can only be count,
 *  in widht else we need to dequeue them;
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans = 1;
        deque<TreeNode*> dq;
        dq.push_back(root);
        while(!dq.empty()){
            while(!dq.empty() && !dq.front())
                dq.pop_front();
            while(!dq.empty() && !dq.back())
                dq.pop_back();
            int n = dq.size();
            ans = max(ans,n);
            while(n-->0){
                TreeNode* tp = dq.front();
                dq.pop_front();
                if(!tp){
                    dq.push_back(NULL);
                    dq.push_back(NULL);
                }
                else{
                    dq.push_back(tp->left);
                    dq.push_back(tp->right);    
                }
            }
        }
        return ans;
    }
};