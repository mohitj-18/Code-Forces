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
    vector<int>a(n);
    for(int i =0;i<n;i++)cin>>a[i];
    vector<int>b(n);
    if(a[0] == -1){
        b[0] = 1;
    }
    if(b[n-1] == -1){
        b[n-1] = 1;
    }
    for(int i =1;i<n-1;i++){
        if(a[i] == -1 && (a[i-1] ==0 && a[i+1] ==0)){
            b[i] = 1;
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