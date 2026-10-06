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
    ll n,c;
    cin>>n>>c;
    vector<ll>a(n);
    cycle(i,n)cin>>a[i];
    cycle(i,n){
        a[i] = a[i]+i+1;
    }
    sort(a.begin(),a.end());
    ll sum =0;
    int j =0;
    while(c>0 && j<n){
        if(c>=a[j]){
            sum++;
            c-=a[j];
        }
        else{
            break;
        }
        j++;
    }
    cout<<sum<<"\n";
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