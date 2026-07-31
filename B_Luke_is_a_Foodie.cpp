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
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        for (auto &v : a) cin >> v;
        long long L = -1e18, R = 1e18;
        int changes = 0;
        for (int i = 0; i < n; i++) {
            long long l = a[i] - x;
            long long r = a[i] + x;
            if (max(L, l) <= min(R, r)) {
                L = max(L, l);
                R = min(R, r);
            } else {
                changes++;
                L = l;
                R = r;
            }
        }
        cout << changes << "\n";
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