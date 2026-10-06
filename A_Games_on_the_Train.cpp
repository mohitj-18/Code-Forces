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
    int n;
    cin>>n;
    vector<int>h(n);
    for(int i =0;i<n;i++)cin>>h[i];
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i =0;i<n;i++){
        mini = min(mini,h[i]);
        maxi = max(maxi,h[i]);
    }
    cout<<maxi+1-mini<<"\n";
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