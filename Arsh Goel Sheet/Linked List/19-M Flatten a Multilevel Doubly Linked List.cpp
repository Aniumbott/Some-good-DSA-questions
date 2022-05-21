/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

Its a recursive process and a bit complicated.
So Just debug with the print function and you will get how process is going 🙄
*/

class Solution {
public:
    void print(Node* head){
        Node* curr = head;
        while(curr->next){
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << curr->val << " | ";
        while(curr){
            cout << curr->val << " ";
            curr = curr->prev;
        }
        cout << endl;
    }
    
    Node* flatten(Node* head) {
        if(head==NULL)
            return NULL;
        Node* curr = head;
        while(curr->next){
            if(curr->child) break;
            curr = curr->next;
        }
        if(curr->child){ 
            Node *carry = curr->next;
            curr->next = flatten(curr->child);
            curr->child = NULL;
            if(curr->next)
                curr->next->prev = curr;
            while(curr->next){
                curr = curr->next;
            }
            if(carry){
                curr->next = carry;
                carry->prev = curr;    
            }   
        }
        //Node* test = head;
        //print(test);
        return head;
    }
};