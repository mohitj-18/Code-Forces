#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
const ll MOD = 1e9 + 7;
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i =0;i<n;i++)cin>>a[i];
    for(int i =0;i<n;i++)cin>>b[i];
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    ll j =0;
    ll ans =1;
    for(ll i =0;i<n;i++){
        while(j<n && a[j]>b[i]){
            j++;
        }
        ll p = j-i;
        if(p<=0){
            cout<<0<<"\n";
            return;
        }
        ans = (ans*p)%(MOD);
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