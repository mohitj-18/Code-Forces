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
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i =0;i<n;i++)cin>>a[i];
    vector<ll>b(n);
    for(int i =0;i<n;i++){
        b[i] = a[i];
    }
    ll count1 =0;
    ll count2 =0;
    if(b[0]>b[n-1]){
        while(b[0] > n){
            b[0] = b[0]-n;
            count1++;
        }
        count2 = b[0];
    }
    else{
        while(b[n-1] >n){
            b[n-1] = b[n-1]-n;
            count1++;
        }
        count2 = b[n-1];
    }
    ll p = a[0];
    ll q = a[n-1];
    for(int i =1;i<=n;i++){
        if(p>q){
            a[i-1] = a[i-1] - count1*(n-i+1) -count2*(i);
        }
        else{
            a[i-1] = a[i-1] - count2*(n-i+1) -count1*(i);
        }
    }
    for(int i =0;i<n;i++){
        if(a[i] != 0){
            NO;
            return;
        }
    }
    YES;
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