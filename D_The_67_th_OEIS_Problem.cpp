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
    vector<long long> p;
    for (int i = 2; p.size() <= n; i++) { 
        bool ok = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                ok = false;
                break;
            }
        }
        if (ok) p.push_back(i);
    }
    for (int i = 0;i < n; i++) {
        cout << p[i] * p[i+1] << " ";
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