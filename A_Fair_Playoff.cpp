#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int p;
    vector<int>nums(4);
    for(int i =0;i<4;i++){
        cin>>p;
        nums[i] = p;
    }
    int y = max(nums[0],nums[1]);
    int x = min(nums[2],nums[3]);
    int z = min(nums[0],nums[1]);
    int k = max(nums[2],nums[3]);
    if(z>k || y<x){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
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