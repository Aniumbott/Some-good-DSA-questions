/* Explaination : 
Let say ther is a number x is appearing twice and y is not in the array,
so, (1+2+....x+x+...n) - (1+2+....n) = x-y = s
and, (1²+2²+....x²+x²+...n²) - (1²+2²+....n²) = x²-y² = ss
so, x + y = ss/s
x = (s + ss/s) / 2
y = x-s
Time complexity : O(n)
*/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int s=0, ss=0, x, y;
    int n = A.size();
    for(int i=0; i<n; i++){
        s += A[i] - (i+1);
        ss += A[i]*A[i] - (i+1)*(i+1);
    }
    x = (s+(ss/s))/2;
    y = x - s;
    return {x, y};
}

