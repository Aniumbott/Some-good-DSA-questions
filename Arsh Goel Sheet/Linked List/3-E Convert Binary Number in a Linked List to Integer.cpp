/*
make a binary string till null and then make ans from that string
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s;
        while(head){
            s += to_string(head->val);
            head = head->next;
        }
        int t=1, ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == '1'){
               ans += t; 
            }
            t*=2;
        }
        return ans;
    }
};