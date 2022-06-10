/*
A simple Binary Search in the BST to count the values which are in range of l and h;
*/
class Solution{
public:
    int getCount(Node *root, int l, int h)
    {
        if(!root) return 0;
        if(root->data > h)
            return getCount(root->left, l, h);
        if(root->data < l)
            return getCount(root->right, l, h);
        return 1 + getCount(root->left, l, h) + getCount(root->right, l, h);
      // your code goes here   
    }
};