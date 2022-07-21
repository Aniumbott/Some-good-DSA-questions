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
    int n, ans = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int i = 1, j = n - 2;
    while (i <= j)
    {
        int x = max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
        int y = max(abs(a[j] - a[j - 1]), abs(a[j] - a[j + 1]));
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            i += 2;
        else if (a[j] > a[j - 1] && a[j] > a[j + 1])
            j -= 2;
        else if (x <= y)
        {
            ans += x + 1;
            i += 2;
        }
        else
        {
            ans += y + 1;
            j -= 2;
        }
    }
    cout << ans << endl;
}

int main()
{
    fastio;
    // online_judge();
    // Pre processing

    ll t = 1;
    cin >> t;
    while (t-- > 0)
        solve();
    return 0;
}
