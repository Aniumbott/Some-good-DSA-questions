#include<bits/stdc++.h>

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
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define endl "\n"
using namespace std;

void online_judge() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}


void solve()
{
    ll n, sum=0;
    cin >> n;
    ll a[7];
    for(ll i=0; i<7; i++){
        cin >> a[i];
        sum += a[i];
        if(sum >= n){
            cout << i+1 << endl;
            return;
        }
    }
    n = (n%sum == 0)?sum:(n%sum);
    for(ll i=0; i<7; i++){
        n -= a[i];
        if(n <= 0){
            cout << i+1 << endl;
            return;
        }
    }
}


int main(){
    fastio;
    // online_judge();
    // Pre processing    

    ll t=1;
    // cin >> t;
    while(t-->0)
        solve();
    return 0;
}
