/*
Copy the next node to current so technically it is overwritten then set next as next next and delete the next node.
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        del->data = del->next->data;
        del->next = del->next->next;
       // Your code here
    }

};