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
    unordered_map<ll,ll>mp;
    for(int i =0;i<n;i++){
        mp[a[i]]++;
    }
    ll maximum = LLONG_MIN;
    for(auto it : mp){
        maximum= max(maximum,it.second);
    }
    ll opp =0;
    while(maximum <n){
        opp++;
        ll take = min(maximum,(ll)n - maximum);
        opp+=take;
        maximum+=take;
    }
    cout<<opp<<"\n";
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