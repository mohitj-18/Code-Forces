#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
        ll n, k;
        cin >> n >> k;
        vector<int>a(n);
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        ll nk = n * k;
        if (nk % 2 == 0) {
            cout << "YES\n";
        } 
        else{
            if(sum % 2 == 1){
                cout << "YES\n";
            } 
            else{
                cout << "NO\n";
            }
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