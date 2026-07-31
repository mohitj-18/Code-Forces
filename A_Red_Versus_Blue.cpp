#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
int n,r,b;
cin>>n>>r>>b;
    int groups = b + 1;
    int base = r / groups;
    int extra = r % groups;

    for (int i = 0; i < groups; i++) {
        for (int j = 0; j < base; j++)
            cout << 'R';

        if (extra) {
            cout << 'R';
            extra--;
        }
        if (i != groups - 1)
            cout << 'B';
    }

    cout << '\n';

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