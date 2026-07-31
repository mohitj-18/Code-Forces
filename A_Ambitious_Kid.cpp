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

        for(int i =0;i<n;i++){
            if(a[i] == 0){
                cout<<0<<"\n";
                return;
            }
            else{
                if(a[i]<0){
                    a[i]*=-1;
                }
            }
    }
    int k = INT_MAX;
    for(int i =0;i<n;i++){
        k = min(a[i],k);
    }
    cout<<k<<"\n";
}

int main() {
    fast_io
            solve();
    return 0;
}