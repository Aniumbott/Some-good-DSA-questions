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


void solve()
{
    int n;
    cin >> n;
    vi v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll sb=v[0], sr=0;
    for(int i=1; i<=n/2; i++){
        sb += v[i];
        sr += v[n-i];
    }

    if(sr > sb){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}


int main(){
    fastio;
    // online_judge();
    // Pre processing    

    int t=1;
    cin >> t;
    while(t-->0)
        solve();
    return 0;
}


/*
OP

*/




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