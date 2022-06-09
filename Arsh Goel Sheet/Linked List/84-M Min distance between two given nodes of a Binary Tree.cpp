/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; 

First we find the lowest common ancestor and then we calculate the distance from a and b to LCA and thats it;

*/

class Solution{
    public:
    Node* lowestCommonAncestor(Node* root, int p, int q) {
        if(!root)  return NULL;
        if(root->data == p || root->data == q) return root;
        Node* l = lowestCommonAncestor(root->left, p, q);
        Node* r = lowestCommonAncestor(root->right, p, q);
        if(l && r) return root;
        return (l == NULL)? r: l;
    }
    
    int helper(Node* root, int x){
        if(!root)return 0;
        if(root->data==x) return 1;
        int a=helper(root->left,x);
        int b=helper(root->right,x);
        if(!a and !b) return 0;
        else return a+b+1;
    }
    
    int findDist(Node* root, int a, int b) {
        Node* lca = lowestCommonAncestor(root, a, b);
        int al = helper(lca, a);
        int bl = helper(lca, b);
        return al+bl-2;
        // Your code here
    }
};