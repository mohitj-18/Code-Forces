#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    ll sum = 0, bestB = 0, ans = 0;
    for (int i = 0; i < n && i < k; i++) {
        sum += a[i];
        bestB = max(bestB, b[i]);
        ll remaining = k - i - 1; 
        ans = max(ans, sum + remaining * bestB);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}