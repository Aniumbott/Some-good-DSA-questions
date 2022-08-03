#include <bits/stdc++.h>
// Keywords
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vll vector<ll>
#define vip vector<pair<int, int>>
#define all(x) (x).begin(), (x).end()
#define PI 3.1415926535897932384626433832
#define um unordered_map
#define dbg(x) cout << #x << " = " << x << endl
#define endl "\n"
// Fast I/O
#define fastio   \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(false);
using namespace std;
// Incase I/O is from file to file
void online_judge()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

// Write solution here
void solve()
{
    int n, m;
    bool ans = true;
    cin >> n >> m;
    string a, b;
    cin >> a;
    cin >> b;

    int i;
    for (i = 0; i < m - 1; i++)
    {
        if (a[n - i - 1] != b[m - i - 1])
        {
            ans = false;
            break;
        }
    }

    if (i == m - 1)
    {
        ans = false;
        char c = b[0];
        for (i; i < n; i++)
        {
            if (a[n - i - 1] == c)
                ans = true;
        }
    }

    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
int main()
{
    fastio;
    // online_judge();
    ll _ = 1;
    cin >> _;
    while (_-- > 0)
        solve();
    return 0;
}
