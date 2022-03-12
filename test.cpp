#include<bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define pob pop_back
#define vi vector<int>
#define vl vector<ll>
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
    ll n, la, lb, ra, rb;
    la = lb = ra = rb = INT_MAX;
    cin >> n;
    vl a(n+1), b(n+1);
    for(ll i=1; i<=n; i++)
        cin >> a[i];
    for(ll i=1; i<=n; i++)
        cin >> b[i];
    for(ll i=1; i<=n; i++){
        la = min(la, abs(a[1]-b[i]));
        lb = min(lb, abs(b[1]-a[i]));
        ra = min(ra, abs(a[n]-b[i]));
        rb = min(rb, abs(b[n]-a[i]));
    }

    ll cst = min(abs(a[1]-b[1]), la + lb) + min(abs(a[n] - b[n]), ra+rb);
    cst = min(cst, abs(a[1]-b[n])+abs(a[n]-b[1]));
    cst = min(cst, abs(a[1]-b[n])+ra+lb);
    cst = min(cst, abs(b[1]-a[n])+la+rb);

    cout << cst << endl;
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



// #include<bits/stdc++.h>

// #define ll long long int
// #define ull unsigned long long int
// #define pb push_back
// #define pob pop_back
// #define ff first
// #define ss second
// #define vi vector<int>
// #define vip vector<pair<int, int>>
// #define PI 3.1415926535897932384626433832
// #define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
// #define endl "\n"
// using namespace std;

// void online_judge() {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
// }


// void solve()
// {
//     int n;
//     cin >> n;
//     vi v;
//     for(int i=0; i<n; i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     sort(v.begin(), v.end());
//     ll sb=v[0], sr=0;
//     for(int i=1; i<=n/2; i++){
//         sb += v[i];
//         sr += v[n-i];
//     }

//     if(sr > sb){
//         cout << "YES\n";
//     }
//     else{
//         cout << "NO\n";
//     }
// }


// int main(){
//     fastio;
//     // online_judge();
//     // Pre processing    

//     int t=1;
//     cin >> t;
//     while(t-->0)
//         solve();
//     return 0;
// }


// /*
// OP





// #include<bits/stdc++.h>

// #define ll long long int
// #define ull unsigned long long int
// #define pb push_back
// #define pob pop_back
// #define ff first
// #define ss second
// #define vi vector<int>
// #define vip vector<pair<int, int>>
// #define PI 3.1415926535897932384626433832
// #define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
// #define endl "\n"
// using namespace std;

// void online_judge() {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
// }


// void solve()
// {
//     int n;
//     string s;
//     cin >> n >> s;
//     ll ct=1;
//     for(int i=1; i<n; i++){
//         if(s[i] != s[i-1]){
//             ct++;
//         }
//     }
//     cout << ct << endl;
// }


// int main(){
//     fastio;
//     // online_judge();
//     // Pre processing    

//     int t=1;
//     cin >> t;
//     while(t-->0)
//         solve();
//     return 0;
// }


// /*
// OP

// */









// #include<bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long int
// #define pb push_back
// #define pob pop_back
// #define ff first
// #define ss second
// #define vi vector<int>
// #define vip vector<pair<int, int>>
// #define PI 3.1415926535897932384626433832
// #define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
// #define endl "\n"
// using namespace std;

// void online_judge() {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
// }


// void solve()
// {
//     int b, c;
//     cin >> b >> c;
//     cout << c/(__gcd(b, c)) << endl;
// }


// int main(){
//     fastio;
//     // online_judge();
//     // Pre processing    

//     int t=1;
//     cin >> t;
//     while(t-->0)
//         solve();
//     return 0;
// }


// /*
// OP

// */













// #include<bits/stdc++.h>

// #define ll long long int
// #define ull unsigned long long int
// #define pb push_back
// #define pob pop_back
// #define ff first
// #define ss second
// #define vi vector<int>
// #define vip vector<pair<int, int>>
// #define PI 3.1415926535897932384626433832
// #define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
// #define endl "\n"
// using namespace std;

// void online_judge() {
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
// }


// void solve()
// {
//     vector<float> vx, vy;
//     for(int i=0; i<3; i++){
//         float x, y;
//         cin >> x >> y;
//         vx.pb(x);
//         vy.pb(y);
//     }
//     float len=0;
//     for(int i=0; i<3; i++){
//         for(int j=i; j<3; j++){
//             if(vy[i] == vy[j]){
//                 len += abs(vx[i] - vx[j]); 
//             }
//             else{
//                 float x = (vy[i]*(vx[i] - vx[j]) + vx[i]*(vy[j] - vy[i]))/vy[j]-vy[i];
//                 cout << x << " ";
//                 if(x < 0) 
//                     len += sqrt((pow(vx[i] - vx[j], 2) + pow(vy[i] - vy[j], 2)));
//             }
//         }
//     }
//     cout << len << "\n";
// }


// int main(){
//     fastio;
//     // online_judge();
//     // Pre processing    

//     int t=1;
//     cin >> t;
//     while(t-->0)
//         solve();
//     return 0;
// }


// /*
// OP

// */