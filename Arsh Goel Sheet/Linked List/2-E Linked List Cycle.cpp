/*
Same floyd algo
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        ListNode* fast;
        ListNode* slow;
        fast = head;
        slow = head;
        while(slow && fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast)
                return true;
        }
        return false;
    }
};