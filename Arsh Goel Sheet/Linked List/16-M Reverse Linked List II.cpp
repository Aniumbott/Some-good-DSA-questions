/*
Iterating till left node then reverse the list from left to right node.
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       ListNode* curr, *prev, *next = NULL;
        ListNode* ans = new ListNode(0);
        ans -> next = head;
        curr = head;
        prev = ans;
        int i=left;
        while(i-->1) {
            prev = curr;
            curr = curr -> next;
        }
        next = curr -> next;
        while (left < right) {
            curr -> next = next -> next;
            next -> next = prev -> next;
            prev -> next = next;
            next = curr -> next;
            left++;
        }
        return ans -> next;
    }
};