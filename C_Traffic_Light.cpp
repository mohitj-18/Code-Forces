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
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    string t = s+s;
    int m = t.length();
    vector<int>a(m);
    int k = INT_MAX;
    for(int i =m-1;i>=0;i--){
        if(t[i] == 'g'){
            k = i;
        }
        a[i] = k;
    }
    int ans =0;
    for(int i =0;i<n;i++){
        if(s[i] == c){
            ans = max(ans,a[i] -i);
        }
    }
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