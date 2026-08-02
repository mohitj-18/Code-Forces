#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long x = 2 * b - c;
    if (x > 0 && x % a == 0) {
        cout << "YES\n";
        return;
    }
    if ((a + c) % 2 == 0) {
        x = (a + c) / 2;
        if (x > 0 && x % b == 0) {
            cout << "YES\n";
            return;
        }
    }
    x = 2 * b - a;
    if (x > 0 && x % c == 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}