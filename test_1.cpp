#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    // cin >> t;
    while (t-- > 0)
    {
        int n, ans = INT_MIN, m = INT_MAX;
        cin >> n;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            ans = max(ans, x - m);
            m = min(x, m);
        }
        cout << ans;
    }
    return 0;
}