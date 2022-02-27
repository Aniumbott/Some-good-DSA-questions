/*Explaination : Its an usecase of The Tortoise and the Hare (Floyd’s Algorithm)
(The one which also used to detects loops in linked-lists)
So we take two pointers Fast and Slow 
then operations are slow = nums[slow] that jums 1 step where fast = nums[nums[fast]] that jumps 2 steps,
so if slow travels a distance then fast must have traveled 2a distance
So solw and fast will meet at the entrypoint of the loop then eventually meed at the common element thats why two loops are required,
best case to understand : [2, 5, 9, 6, 9, 3, 8, 9, 7, 1]
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0]; 
        do {
            slow = nums[slow]; 
            fast = nums[nums[fast]]; 
            cout << fast << "-" << slow << " ";
        } while(slow != fast); 
        
        cout << endl;
        fast = nums[0]; 
        while(slow != fast) {
            slow = nums[slow]; 
            fast = nums[fast];
            cout << fast << "-" << slow << " ";
        }
        return slow; 
    }
};