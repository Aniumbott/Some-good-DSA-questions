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
    ll n, m;
    cin >> n >> m;
    ll a[n], b[n], c[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    c[0] = 0;
    for (ll i = 1; i < n; i++)
    {
        c[i] = max((ll)0, a[i - 1] - a[i]);
        c[i] += c[i - 1];
    }

    b[n - 1] = 0;
    for (ll i = n - 2; i >= 0; i--)
    {
        b[i] = max((ll)0, a[i + 1] - a[i]);
        b[i] += b[i + 1];
    }

    while (m--)
    {
        ll s, t, ans = 0, l = 0;
        cin >> s >> t;
        if (s < t)
            cout << c[t - 1] - c[s - 1] << endl;
        else
            cout << b[t - 1] - b[s - 1] << endl;
    }
}

int main()
{
    fastio;
    // online_judge();
    // Pre processing

    ll t = 1;
    // cin >> t;
    while (t-- > 0)
        solve();
    return 0;
}
