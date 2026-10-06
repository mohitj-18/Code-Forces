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
    for(int i =0;i<n;i++)cin>>a[i];
    ll mini = LLONG_MAX;
    ll maxi = LLONG_MIN;
    ll sum =0;
    for(int i =0;i<n;i++){
        mini = min(mini,a[i]);
        maxi = max(maxi,a[i]);
        sum+=a[i];
    }
    ll count=0;
    for(int i =0;i<n;i++){
        if(a[i] == maxi){
            count++;
        }
    }
    if(maxi-mini>k+1){
        cout<<"Jerry"<<"\n";
        return;
    }
    else if(maxi-mini == k+1 && count>1){
        cout<<"Jerry"<<"\n";
        return;
    }
    if(isodd(sum)){
        cout<<"Tom"<<"\n";
    }
    if(iseven(sum)){
        cout<<"Jerry"<<"\n";
    }

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