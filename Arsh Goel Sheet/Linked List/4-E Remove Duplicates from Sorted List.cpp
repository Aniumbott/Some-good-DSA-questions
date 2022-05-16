/*
simple algo just look code once
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ans;
        ans = head;
        while(head){
            while( head->next && head->next->val == head->val){
                    head->next = head->next->next;
            }
            head = head->next;
        }
        return ans;
    }
};