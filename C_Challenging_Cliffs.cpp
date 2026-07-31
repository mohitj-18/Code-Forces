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
    sort(a.begin(),a.end());
    if(n ==2){
        cout<<a[0]<<" "<<a[1]<<"\n";
    }
    else{
    int p = INT_MAX;
    int k =-1;
    for(int i =0;i<n-1;i++){
        if(a[i+1]-a[i]<p){
        p = a[i+1]-a[i];
        k =i;
        }
    }
    cout<<a[k]<<" ";
    for(int i =k+2;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i =0;i<k;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[k+1]<<"\n";
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