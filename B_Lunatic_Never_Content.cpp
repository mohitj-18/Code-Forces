#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i =0;i<n;i++)cin>>a[i];
    ll ans =0;
    for(int i =0;i<n/2;i++){
        ll k = abs(a[i]-a[n-i-1]);
        ans = gcd(ans,k);
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