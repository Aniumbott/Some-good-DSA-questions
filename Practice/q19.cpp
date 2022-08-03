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
    ll n, m, x;
    cin >> n >> m;
    vector<ll> a(m, 0);
    vector<ll> env;
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll p = 1;
    for (ll i = 0; i < m; i++)
    {
        if (a[i] - p > 0)
            env.push_back(a[i] - p);
        p = a[i] + 1;
    }

    if ((a[0] == 1 || a[m - 1] == n) && (env.size() == 0))
        env.push_back(n - 1);

    else if (a[m - 1] != n)
    {
        env[0] += (n - a[m - 1]);
    }

    sort(env.begin(), env.end(), greater<ll>());

    // for (auto i : env)
    // cout << i << " ";

    ll d = 1, ans = 0;
    for (ll i = 0; i < env.size(); i++)
    {
        if (env[i] == d)
            ans += 1;
        else
            ans += (d < env[i]) ? (env[i] - d) : 0;
        d += 4;
        // cout << ans << " ";
    }
    ans = n - ans;
    cout << ans << endl;
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
