/*Explaination : 
If there is a matrix say m x n then concider it as a 1d array with m*n elements.
Then use binary search to find the target.
Time complexity : O(log(n))
*/

class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        
        int m = matrix.size(), n = matrix[0].size(), high = m*n - 1, low = 0; 
        
        while(low <= high){
            int mid = (low + (high-low)/2);
            if(matrix[mid/m][mid%n] == target)
                return true;
            if(matrix[mid/n][mid%n] > target){
                    high = mid - 1;
                }
            else{
                    low = mid + 1;
                }
            }
        return false;
    }
};