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
    int o =0;
    int e1 =0;
    int e2 =0;
    for(int i =0;i<n;i++){
        if(nums[i]%2 !=0){
            o++;
        }
        else if(nums[i]%4 ==0){
            e1++;
        }
        else{
            e2++;
        }
    }
    cout<<max({o,e1,e2})<<"\n";
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