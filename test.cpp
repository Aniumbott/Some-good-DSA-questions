#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define pob pop_back
#define vi vector<int>
#define vll vector<ll>
#define vip vector<pair<int, int>>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define PI 3.1415926535897932384626433832
#define um unordered_map
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define dbg(x) cout << #x << " = " << x << endl
#define fastio   \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(false);
#define endl "\n"
using namespace std;

void online_judge()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    // for (int i = 0; i < 10000; i++)
    //     cout << i << " ";
    // ll n;
    // cin >> n;
    // vector<ll> ans(n);
    // if (n == 1)
    // {
    //     cout << 1 << " " << endl;
    // }
    // else
    // {
    //     for (ll i = 1; i <= n; i += 2)
    //     {
    //         ans[i] = i;
    //     }
    //     for (ll i = 0; i <= n; i += 2)
    //     {
    //         ans[i] = i + 2;
    //     }
    //     if (n % 2)
    //     {
    //         swap(ans[n - 1], ans[1]);
    //         ans[1] = n;
    //     }
    //     for (auto i : ans)
    //         cout << i << " ";
    //     cout << endl;
    // }

    for (int i = 1; i <= 45; i++)
        cout << i << endl;
}

int main()
{
    fastio;
    // online_judge();
    // Pre processing

    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
