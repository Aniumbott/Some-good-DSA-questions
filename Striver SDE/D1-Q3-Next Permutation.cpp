/* Explaination :
say,
nums = 1 2 3 4 5 6 9 4 3
in here k = 6 (as we are checking the if, in any two adjecent nums if first one is lesser than the next one)
then we will check the greater num in nums[k+1 to n] then swap them
now nums = 1 2 3 4 5 9 6 4 3
then we will reverse the nums[k+1 to n]
next nums = 1 2 3 4 5 9 3 4 6
*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k, l, n=nums.size();
        for(k=n-2; k>=0; k--){
            if(nums[k] < nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(l=n-1; l>=0; l--){
                if(nums[l] > nums[k]){
                    break;
                }
            }
            swap(nums[l], nums[k]);
            reverse(nums.begin()+k+1, nums.end());
        }
    }
};