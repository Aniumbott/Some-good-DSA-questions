#include<bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define pob pop_back
#define vi vector<int>
#define vip vector<pair<int, int>>
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
    int n, m, ct=0;
    cin >> n >>m;
    char c;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++)
            cin >> c;
        cin >> c;
        if(c == 'R')
            ct++;
    }
    for(int i=0; i<m; i++)
    {
        cin >> c;
        if(c == 'D')
            ct++;
    }
    cout << ct << endl;
}


int main(){
    fastio;
    // online_judge();
    // Pre processing    

    ll t=1;
    cin >> t;
    while(t-->0)
        solve();
    return 0;
}
