#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
bool check(ll k, ll h, const vector<ll>& a) {
    ll d = 0;
    int n = a.size();
    for (int i = 0; i < n - 1; ++i) {
        d += min(k, a[i+1] - a[i]);
        if (d >= h) return true;
    }
    d += k;
    return d >= h;
}

void solve() {
    ll n,h;
    cin>>n>>h;
    vector<ll>a(n);
    for(ll i =0;i<n;i++)cin>>a[i];
    ll l =1;
    ll r = h;
    ll ans = h;
    while(l<=r){
        ll mid = l+(r-l)/2;
        if(check(mid,h,a)){
            ans = mid;
            r =mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans<<"\n";
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