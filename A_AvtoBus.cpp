#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n;
    cin>>n;
    if(n>=4 && n%2 == 0){
       ll minm = n / 6;
        if (n % 6 != 0) {
            minm++;
        }
        ll maxim = n / 4;
        cout<<minm<<" "<<maxim<<"\n";
    }
    else{
        cout<<-1<<"\n";
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