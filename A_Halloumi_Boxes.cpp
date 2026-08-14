#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    if (k > 1) {
        cout << "YES\n";
    } else {
        if (is_sorted(a.begin(), a.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}