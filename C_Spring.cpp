#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
ll lcm(ll a, ll b){
    return a /gcd(a,b) * b;
}
void solve() {
    ll a,b,c,m;
        cin >> a >> b >> c >> m;
        ll A = m/a;
        ll B = m/b;
        ll C = m/c;

        ll ab = lcm(a,b);
        ll ac = lcm(a,c);
        ll bc = lcm(b,c);

        ll abc = lcm(ab,c);

        ll AB = m/ab;
        ll AC = m/ac;
        ll BC = m/bc;
        ll ABC = m/abc;

        ll AB_only = AB - ABC;
        ll AC_only = AC - ABC;
        ll BC_only = BC - ABC;

        ll A_only = A - AB - AC + ABC;
        ll B_only = B - AB - BC + ABC;
        ll C_only = C - AC - BC + ABC;

        ll Alice = 6*A_only + 3*AB_only + 3*AC_only + 2*ABC;
        ll Bob   = 6*B_only + 3*AB_only + 3*BC_only + 2*ABC;
        ll Carol = 6*C_only + 3*AC_only + 3*BC_only + 2*ABC;

        cout << Alice << " " << Bob << " " << Carol << "\n";
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