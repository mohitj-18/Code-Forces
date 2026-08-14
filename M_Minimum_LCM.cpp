#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
long long n;
    cin >> n;

    long long largest_proper_divisor = 1;

    for (long long d = 2; d * d <= n; ++d) {
        if (n % d == 0) {
            largest_proper_divisor = n / d;
            break;
        }
    }

    long long a = largest_proper_divisor;
    long long b = n - a;

    cout << a << " " << b << "\n";
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