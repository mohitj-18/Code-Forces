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
        for (int i = 1; i <= n; ++i) {
        int low = i;
        int med = n + (2 * i - 1);
        int high = n + (2 * i);
        cout << low << " " << med << " " << high << (i == n ? "" : " ");
    }
    cout << "\n";
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