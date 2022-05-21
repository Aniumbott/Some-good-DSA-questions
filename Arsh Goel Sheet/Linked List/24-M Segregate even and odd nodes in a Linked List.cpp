/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

Make two different list odd and even, then joint them and return them
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* curr=head;
        Node*  odd = new Node(0);
        Node*  even = new Node(0);
        Node* hodd = odd;
        head = even;
        
        while(curr){
            if(curr->data%2){
                odd->next = curr;
                odd = odd->next;
            }
            else{
                even->next = curr;
                even = even->next;
            }
            curr = curr->next;
        }
        even->next = hodd->next;
        odd->next = NULL;
        return head->next;
    }
};