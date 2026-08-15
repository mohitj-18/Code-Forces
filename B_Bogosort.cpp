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
    vector<int>nums(n);
    for(int i =0;i<n;i++)cin>>nums[i];
    if(n ==1){
        cout<<nums[0]<<"\n";
        return;
    }
    sort(nums.rbegin(),nums.rend());
    for(int i =0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\n";
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