#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<bool>b(n,true);
    for(int i =0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    if(n ==1){
        cout<<0<<"\n";
        return;
    }
            int max_len = 1, curr = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) {
                curr++;
            } else {
                curr = 1;
            }
            max_len = max(max_len, curr);
        }
        cout << n - max_len << "\n";
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