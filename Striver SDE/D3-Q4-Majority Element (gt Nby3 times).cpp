/*Explaination :
Boyer Moore Voting Algorithm
as we need a number thhat appears more than n/3 time we can also say that it might be more than one number
like 
((n/3)+1) + ((n/3)+1) + ((n/3)-1) = n
so we will use the same logic as used in n/2 question but we will take two pointers
after gettinfg the n1 and n2 we will check the no of accourances and return the answer.
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1=-1, n2=-1, ct1=0, ct2=0, n=nums.size();
        for(int i:nums){
            if(i == n1)
                ct1++;
            else if(i == n2)
                ct2++;
            else if(ct1 == 0){
                n1 = i;
                ct1++;
            }
            else if(ct2 == 0){
                n2 = i;
                ct2++;
            }
            else{
                ct1--;
                ct2--;
            }   
        }
        
        ct1 = ct2 = 0;
        vector<int> ans;
        for(int i:nums){
            if(i == n1)
                ct1++;
            else if(i == n2)
                ct2++;
        }
        if(ct1 > n/3)
            ans.push_back(n1);
        if(ct2 > n/3)
            ans.push_back(n2);
        return ans;
    }
};