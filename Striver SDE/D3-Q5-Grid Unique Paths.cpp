/* Explanation:
Asked in Google and there are 3 possible solutions.
Brute-better-best the given one is the best one.
In bute one we check every possible path by binary search.

In better one we use Dynamic Programming, where we take a 2d vector to store if the particular box visited or not. and check in every iterations.

In best one we used a bit of mathematics like we know that it take m+n-2 steps to grt end so ils like we can chose to go anwere in between so ans is simple (m+n-2)C(m-1),
so we just need to calculate it which takes O(n) time.
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n+m-2, r = m-1;
        double ans=1;
        for(int i=1 ; i<=r; i++){
            ans = ans*(N-r+i)/i;
        }
        return (int)ans;
    }
};