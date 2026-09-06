#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
        int n, m;
        cin >> n >> m;
        bool present[26] = {};
        for (int i = 0;i < n;i++) {
            string s;
            cin >> s;
            present[s[0] - 'a'] = true;
        }
        bool ok = true;
        for (int i = 0; i < m; i++) {
            string a;
            cin >> a;
            for (char c : a) {
                int id = tolower(c) - 'a';
                if (!present[id]) {
                    ok = false;
                    break;
                }
            }
        }
        if(ok){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
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