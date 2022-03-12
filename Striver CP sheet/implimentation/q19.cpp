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
    int a[] = {0,0,0};
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i+=2){
        if(s[i] == '1')
            a[0]++;
        else if(s[i] == '2')
            a[1]++;
        else
            a[2]++;
    }
    int i=0;
    while(a[0]-->0){
        s[i] = '1';
        i+=2;
    }
    while(a[1]-->0){
        s[i] = '2';
        i+=2;
    }
    while(a[2]-->0){
        s[i] = '3';
        i+=2;
    }
    cout << s << endl;
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
