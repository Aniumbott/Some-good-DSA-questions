#include<bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define vi vector<int>
#define vip vector<pair<int, int>>
#define PI 3.1415926535897932384626433832
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define endl "\n"
using namespace std;

void online_judge() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}


int solve(ll &x)
{
    string s;
    cin >> s;

    if(s == "X++") x++;
    else if(s == "++X") ++x;
    else if(s == "X--") x--;
    else --x;
}


int main(){
    fastio;
    // online_judge();
    // Pre processing    
    ll x=0;
    int t=1;
    cin >> t;
    while(t-->0)
        solve(x);
    cout << x;
    return 0;
}


/*
OP

*/