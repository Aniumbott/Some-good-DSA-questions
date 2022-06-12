/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/
/* 
We are using unordered set to track of all nodes and leaves ans check if x is a leaf nodes data then x+1 and x-1 exist or not
*/
void storeAllNodes(Node* root, unordered_set<int> &nodes, unordered_set<int> &leaves){
    if(!root) return;
    nodes.insert(root->data);
    if(root->left == NULL && root->right == NULL){
        leaves.insert(root->data);
        return;
    }
    storeAllNodes(root->left, nodes, leaves);
    storeAllNodes(root->right, nodes, leaves);
}

bool isDeadEnd(Node *root)
{
    unordered_set<int> nodes, leaves;
    nodes.insert(0);
    storeAllNodes(root, nodes, leaves);
    for(auto i = leaves.begin() ; i != leaves.end(); i++){
        int x = (*i);
        if(nodes.find(x+1) != nodes.end() && nodes.find(x-1) != nodes.end())
            return true;
    }
    return false;
}