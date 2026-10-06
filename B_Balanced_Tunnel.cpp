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
    int n;
    cin>>n;
    vector<int>a(n),b(n),pos(n+1);
    cycle(i,n){
        cin>>a[i];
        pos[a[i]] = i;
    }
    cycle(i,n)cin>>b[i];
    int mn = n;
    int ans = 0;
    for(int i =n-1;i>= 0;i--){
        if(pos[b[i]]>mn){
            ans++;
        }
        mn = min(mn,pos[b[i]]);
    }
    cout<<ans<<"\n";
}

int main() {
    fast_io
      solve();
    return 0;
}