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
    ll p = a[k-1];
    ll wins1 =0;
    ll winner = a[0];
    for(int i =1;i<n;i++){
        if(a[i]>winner){
            winner = a[i];
        }
        if(winner == p){
            wins1++;
        }
    }
    ll wins2 =0;
    swap(a[0],a[k-1]);
    winner =a[0];
    for(int i =1;i<n;i++){
        if(a[i]>winner){
            winner = a[i];
        }
        if(winner == p){
            wins2++;
        }
    }
    swap(a[0],a[k-1]);
    int j =0;
    while(a[j]<p){
        j++;
    }
    swap(a[j],a[k-1]);
    ll wins3=0;
    winner =a[0];
    for(int i =1;i<n;i++){
        if(a[i]>winner){
            winner = a[i];
        }
        if(winner == p){
            wins3++;
        }
    }
    cout<<max({wins1,wins2,wins3})<<"\n";
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