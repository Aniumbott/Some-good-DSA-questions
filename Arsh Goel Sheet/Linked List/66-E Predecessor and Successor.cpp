/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
// We are runnig and inorder transversal to find the pre = right most node of left child and suc = left most node of right child
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root || suc) return;
    findPreSuc(root->left, pre, suc, key);
    if(root->key > key && !suc){
        suc = root;
        return;
    }
    if(root->key < key){
        pre = root;
    }
    findPreSuc(root->right, pre, suc, key);
}