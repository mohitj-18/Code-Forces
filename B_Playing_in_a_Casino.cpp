#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>arr(n,vector<ll>(m));
    for(ll i =0;i<n;i++){
        for(ll j =0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    ll total =0;
    for(ll j=0;j<m;j++){
        vector<ll> temp;
        for(ll i=0;i<n;i++){
            temp.push_back(arr[i][j]);
        }
        sort(temp.begin(),temp.end());
        for(ll i=0;i<n;i++){
            total += temp[i]*(2*i-n+1);
        }
    }
    cout<<total<<"\n";
}


int main() {
    fast_io
    int t = 1;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}