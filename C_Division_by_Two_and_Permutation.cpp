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
    int p;
    for(int i =0;i<n;i++){
        cin>>p;
        nums[i] = p;
    }
    sort(nums.rbegin(),nums.rend());
    vector<bool>mark(n+1,false);
    for(int i =0;i<n;i++){
        while(nums[i] >n){
            nums[i]/=2;
        }
        while(nums[i] >0 && mark[nums[i]]){
            nums[i]/=2;
        }
        if(nums[i] ==0){
            cout<<"NO"<<"\n";
            return;
        }
        mark[nums[i]] = true;
    }
    cout<<"YES"<<"\n";
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