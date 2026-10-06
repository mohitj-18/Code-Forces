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
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b,c;
    int mx=0;
    cycle(i,n){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    cycle(i,n){
        if(a[i]==mx)c.pb(a[i]);
        else b.pb(a[i]);
    }
    if(b.empty()){
        cout<<-1<<"\n";
        return;
    }
    cout<<b.size()<<" "<<c.size()<<"\n";
    for(auto x:b)cout<<x<<" ";
    cout<<"\n";
    for(auto x:c)cout<<x<<" ";
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