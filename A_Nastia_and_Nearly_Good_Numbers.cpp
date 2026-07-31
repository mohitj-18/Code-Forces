#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    long long a, b;
    cin >> a >> b;
    if (b == 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << a << " " << a*b << " " << a*(b+1) << "\n";
    }
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