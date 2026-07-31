#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
        cin >> n;
        vector<long long> odd;
        long long sum_even = 0;
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if(x % 2 == 0) sum_even += x;
            else odd.push_back(x);
        }
        if(odd.empty()) {
            cout << 0 << '\n';
            return;
        }
        sort(odd.begin(), odd.end());
        long long total_odd = 0;
        for(auto x : odd) total_odd += x;
        long long ans = sum_even;
        if(odd.size() % 2 == 1) {
            ans += total_odd - odd[0];
        } else {
            ans += total_odd - odd[0] - odd[1];
        }
        cout << ans << '\n';
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