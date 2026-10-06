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
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>nx(n),pr(n);
    for(int i=0;i<n;i++){
        nx[i]=i+1;
        pr[i]=i-1;
    }
    nx[n-1]=-1;
    ll sum =0;
    int l=k-1;
    int r=n-k;
    int m=n;
    while(m>=k){
        int x;
        if(a[l]>=a[r]){
            x=l;
        }
        else{
        x=r;
        }
        sum+=a[x];
        if(l==r){
            l=nx[x];
            r=pr[x];
        }
        else if(x==l){
            if(r<l){
            r=pr[r];
            }
            l=nx[l];
        }
        else{
            if(l>r){
            l=nx[l];
            }
            r=pr[r];
        }
        if(pr[x]!=-1){
        nx[pr[x]]=nx[x];
        }
        if(nx[x]!=-1){
        pr[nx[x]]=pr[x];
        }
        m--;
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