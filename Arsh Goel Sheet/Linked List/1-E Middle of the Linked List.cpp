/*
"there are two ways of doing this
1. either use fast and slow pointer method. (floyd algo)
2. Count till last and again iterat till count/2. (somehow it is faster)"
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head != NULL){
            ListNode* slow;
            ListNode* fast;
            slow = head;
            fast = head;
            while(fast && fast->next){
                fast = fast->next->next;
                slow = slow->next;
            }
            return slow;
        }
        return head;
    }
};