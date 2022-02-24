#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<int> v; 
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i=0; i<n; i++){
            if(i%2 != 0){
                cout << v[i-1]*v[(i==n-1)?i-1:i+1] << " ";
            }
            else{
                cout << v[i] << " ";
            }
        }
        cout << "\n";
    }
}