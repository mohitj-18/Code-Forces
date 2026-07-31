#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll a, b;
    cin >> a >> b;
    int ans = INT_MAX;
    for(int inc = 0; inc <= 30; inc++) {
        ll sum 
        ll nb = b + inc;
        int sum =0;
        if(nb == 1) continue;
        ll temp = a; // a non binary string 
        // sum is not equal
        //sum can be
        sum = sum +2;
        int sum =0;
        for(int i =0;i<n;i++){
            sum++;
        }
        int count = inc;
        while(temp > 0) {
            temp /= nb;
            count++;
        }
        ans = min(ans, count);
    }
    cout << ans << "\n";
}

int main() {
    fast_io
    int t = 1;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}