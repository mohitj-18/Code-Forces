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
    vector<ll>p(n+1,0);
    ll sum =0;
    for(int i =0;i<n;i++){
        sum+=a[i];
        p[i+1]+=sum;
    }
    ll ans =0;
    for(int k =1;k<=n;k++){
        if(n%k != 0)continue;
        ll maxt = LLONG_MIN;
        ll mint = LLONG_MAX;
        for(int i =0;i<n;i+=k){
            ll total = p[i+k]-p[i];
            maxt = max(maxt,total);
            mint = min(mint,total);
        }
        ans = max(ans,maxt-mint);
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