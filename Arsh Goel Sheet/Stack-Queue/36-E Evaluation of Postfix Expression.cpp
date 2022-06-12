/*
Simple solution just go through once.
*/

class Solution {
public:
    ListNode* halfreverse(ListNode* head){
        ListNode* slow = head, *fast = head;
        int i=1;
        while(fast and fast->next){
            fast=fast->next->next;
            slow=slow->next;
            i++;
        }
        ListNode* p=NULL, *current=slow->next, *n;
        slow->next = NULL;
        while(current){
            n = current->next;
            current->next = p;
            p=current;
            current=n;
        }
        ListNode*sec = p;
        /*while(sec){
            cout << sec->val << " ";
            sec = sec->next;
        }*/
        return p;
    }
    int sizeee(ListNode* head){
        int i=0;
        while(head){
            head = head->next;
            i++;
        }
        return i;
    }
    void reorderList(ListNode* head) {
        ListNode* sec = halfreverse(head);
        
        //int sizee = sizeee(head);
        ListNode* dummy = new ListNode(), *temp = dummy;
        int i=0;
        while(sec){
            temp = head->next;
            head->next = sec;
            //cout << sec->val << " ";
            sec = sec->next;
            head->next->next = temp;
            head = temp;        
        }
        //head= dummy->next;
    }
};