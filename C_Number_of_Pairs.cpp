#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,l,r;
    cin>>n>>l>>r;
    int k =0;
    int p;
    vector<int>nums(n);
    while(k<n){
        cin>>p;
        nums[k] = p;
        k++;
    }
    sort(nums.begin(),nums.end());
    int count =0;
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