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
    vector<ll>nums(n);
    int p;
    for(int i =0;i<n;i++){
        cin>>p;
     nums[i] =p;
    }
    unordered_map<ll,ll>match;
    for(int i =0;i<n;i++){
        match[nums[i] -i]++;
    }
        ll count =0;
    for(auto& p : match){
        ll k = p.second;
        count+=k*(k-1)/2;
    }

    cout<<count<<"\n";
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