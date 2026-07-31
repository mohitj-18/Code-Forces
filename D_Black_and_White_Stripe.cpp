#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int white = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W')
                white++;
        }
        int ans = white;
        for(int i = k; i < n; i++){
            if(s[i - k] == 'W'){
                white--;
            }
            if(s[i] == 'W'){
                white++;
            }
            ans = min(ans, white);
        }
        cout <<ans << endl;
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