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
    cin >> n >> m;
    vector<pair<int, int>> un(n);
    vector<vector<int>> mp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> un[i].second;
        un[i].first = i;
    }
    sort(un.begin(), un.end(), [](const auto &a, const auto &b)
         { return a.second < b.second; });
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a - 1].push_back(b - 1);
        mp[a - 1].push_back(a - 1);
    }
    int ans = 0;
    int k;
    for (k = 0; k < n; k++)
    {
        if (mp[un[k].first].size() % 2)
            ans = un[k].second;
    }
    if (k > 1)
    {
        ans = min(ans, un[0].second + un[])
    }
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
