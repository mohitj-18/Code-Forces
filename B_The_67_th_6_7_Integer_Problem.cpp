#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
        vector<int>a(7);
        int sum = 0,m = -100;
        for(int i = 0;i < 7;i++) {
            cin >> a[i];
            sum += a[i];
            m = max(m,a[i]);
        }
        cout << 2 * m - sum << endl;
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