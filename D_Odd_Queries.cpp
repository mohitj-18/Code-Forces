#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,q;
    cin>>n>>q;
    vector<int>nums(n);
    int sum =0;
    for(int i =0;i<n;i++){
    cin>>nums[i];
    sum+=nums[i];
    }
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++){
    pref[i + 1] = pref[i] + nums[i];
    }
    int l,r,k;
    while(q){
        cin>>l>>r>>k;
        int curr = pref[r] - pref[l - 1];
        int val = (r-l+1)*k;
        int fin =  sum-curr+val;
        if(fin%2 !=0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
        q--;
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