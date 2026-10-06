// # mohitj_18 #  
#define cycle(i,n) for(int i = 0; i < n; i++)
#define cycle1(i,n) for(int i = 1; i <= n; i++)
#define rcycle(i,n) for(int i = n-1; i >= 0; i--)
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
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    vector<ll>k(q);
    cycle(i,n)cin>>a[i];
    cycle(i,q)cin>>k[i];
    vector<ll>pref(n+1,0);
    vector<ll>mx(n);
    mx[0] = a[0];
    for(int i =0;i<n;i++){
        pref[i+1] = pref[i]+a[i];
        if(i>0){
        mx[i] =max(mx[i-1],a[i]);
        }
    }
    for(int i =0;i<q;i++){
        int l =0;
        int r = n-1;
        int ans =-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(mx[mid]<=k[i]){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout<<pref[ans+1]<<" ";
    }
    cout<<"\n";
}

int main() {
    fast_io
    int t = 1;
    cin >> t;
    while (t--){
      solve();
    }
    return 0;
}