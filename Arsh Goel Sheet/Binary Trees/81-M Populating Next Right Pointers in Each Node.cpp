/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
We are iterating with BFS so all nodes at same level will appear in one complete queue so we just need to connect all of 'em;
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)return NULL;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                Node *node = q.front();
                q.pop();

                if (i == n - 1)
                    node->next = NULL;
                else
                    node->next = q.front();

                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
        return root;
    }
};