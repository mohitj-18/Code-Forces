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
    for(int j =1;j<n-1;j++){
        int i = -1;
        int k = -1;
        for(int x =0;x<j;x++){
            if(a[x]<a[j]){
                i = x;
                break;
            }
        }
        for(int x =j+1;x<n;x++){
            if(a[x]<a[j]){
                k = x;
                break;
            }
        }
        if(i!=-1 && k!=-1){
            cout<<"YES"<<"\n";
            cout<<i+1<<" "<<j+1<<" "<<k+1<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
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