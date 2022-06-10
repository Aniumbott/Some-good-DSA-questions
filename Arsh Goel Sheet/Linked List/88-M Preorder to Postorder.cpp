/*
We can have the left node of the parent in order to find its right node,
we need to find an element just grater than the patrent node then we do this recursively.
*/

Node *helper(int pre[], int i, int j)
{
    if (i == j)
    {
        Node *temp = newNode(pre[i]);
        return temp;
    }
    if (i > j)
        return NULL;
    int I = i + 1;
    for (; I <= j; I++)
    {
        if (pre[I] >= pre[i])
            break;
    }
    Node *root = newNode(pre[i]);
    root->left = helper(pre, i + 1, I - 1);
    root->right = helper(pre, I, j);
    return root;
}
Node *post_order(int pre[], int size)
{
    return helper(pre, 0, size - 1);
}