// # mohitj_18 #
#include <bits/stdc++.h>
using namespace std;
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define iseven(n) ((n) % 2 == 0)
#define isodd(n) ((n) % 2 != 0)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i =0;i<n;i++)cin>>a[i];
    vector<int>p;
    for(int i =2;i*i<=x;i++){
        if(x%i==0){
            p.push_back(i);
            while(x%i == 0){
                x/=i;
            }
        }
    }
    if(x > 1) {
        p.push_back(x);
    }
    vector<ll>sum(p.size(), 0);
    for(int i =0;i<n;i++) {
        for(int j = 0;j<p.size();j++) {
            if(a[i]%p[j]==0) {
                sum[j]+=a[i];
            }
        }
    }
    ll ans = 0;
    for(int i =0;i<p.size();i++){
        ans = max(ans,sum[i]);
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}