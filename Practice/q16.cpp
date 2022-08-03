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
bool valid(ll a[], ll mid, ll n)
{
    ll g = 0, r = 0, mx = 0;
    for (ll i = 0; i < mid; i++)
        g += a[i];
    for (ll i = mid; i < n; i++)
        mx = max(mx, a[i]);
    for (ll i = mid; i < n; i++)
        r += abs(a[i] - mx);
    return g >= r;
}

ll helper(ll a[], ll n)
{
    ll l = 0, r = n, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (valid(a, mid, n))
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }

    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n] = {0};
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll ans = helper(a, n);
    reverse(a, a + n);
    ans = min(ans, helper(a, n));
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
