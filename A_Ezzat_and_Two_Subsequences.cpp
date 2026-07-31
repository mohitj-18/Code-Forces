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
    ll sum =0;
    vector<int>nums(n);
    int p;
    for(int i =0;i<n;i++){
        cin>>p;
        nums[i] = p;
        sum+=nums[i];
    }
        if(n == 1){
    cout << nums[0] << "\n";
    return;
}
    int k =INT_MIN;
    for(int i =0;i<n;i++){
        k = max(k,nums[i]);
    }
    ll ne = sum - k;
    long double avg = (long double)ne/(n-1);
    long double final = avg + k;
    cout<< fixed << setprecision(9) <<final<<"\n";
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