/*

The structure of linked list is the following
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

Simple code.
*/

class Solution
{
    public:
    Node *zigZag(Node* head)
    {
     // your code goes here
        bool flag = 1;
        Node* curr = head;
        while(curr->next)
        {
           if(flag){
               if(curr->data > curr->next->data){
                   swap(curr->data,curr->next->data);
               }
           }
           else{
               if(curr->data < curr->next->data){
                   swap(curr->data,curr->next->data);
               }
           }
           
           flag = !flag;
           curr = curr->next;
       }
       
       return head;
    }
};