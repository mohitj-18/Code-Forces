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
    vector<int>a1(n);
    for(int i =0;i<n;i++)cin>>a[i];
    for(int i =0;i<n;i++)cin>>a1[i];
    int l =0;
    int r =n-1;
    while(a[l] == a1[l] && l<n){
        l++;
    }
    while(a[r] == a1[r] && r>=0){
        r--;
    }
    while(l>0 && a1[l] >=a1[l-1]){
        l--;
    }
    while(r<n-1 && a1[r+1]>=a1[r]){
        r++;
    }
    cout<<l+1<<" "<<r+1<<"\n";
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