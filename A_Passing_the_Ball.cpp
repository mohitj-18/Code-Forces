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
    cin>>n;
        string s;
        cin >> s;
        vector<bool>count(n, false);
        int pos = 1;
        for (int i = 0; i <= n; i++) {
            count[pos] = true;
            if (s[pos - 1] == 'R'){
                pos++;
            }
            else{
                pos--;
        }
        }
                int sum = 0;
        for(int i = 1;i <= n;i++){
            if (count[i]){
                sum++;
            }
        }
        cout <<sum<< "\n";
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