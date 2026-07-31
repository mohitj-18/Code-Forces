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
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int l =0;
    int h =0;
    for(int i =0;i<n;i++){
        if(a[i]==1){
            l =i;
        }
        if(a[i] == n){
            h =i;
        }
    }
    int ans;
    ans = min({max(l,h)+1,max(n-l,n-h),h+1+n-l,l+1+n-h});
    cout<<ans<<"\n";
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