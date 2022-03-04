/*Explaination :
we ae taking a counter and a number;
i will iterate through all the elements of the nums array then;
if i is n  then ct++ and if not then ct-- and at the point of ct==0 and n=i;
the main logic behind this is ther must be an elemnt wich accoutring more than nums.size()/2 times,
So it must be consicutive for once even in the worse case scinario n will remain last;
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct=0, n=0;
        for(int i:nums){
            if(ct == 0){
                n = i;
            }
            if(i == n){
                ct++;
            }
            else{
                ct--;    
            }
        }
        return n;
    }
};