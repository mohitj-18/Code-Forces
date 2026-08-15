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
    ll count=0;
    ll p;
    ll q;
    int length =0;
    while(length != count || length ==0){
    q =n;
    length =0;
    while(q>0){
        length++;
        q = q/10;
    }
        count =0;
        p =n;
    while(p>0){
        int k  = p%10;
        if(k ==0){
            count++;
        }
        if(k!=0 && n%k ==0){
            count++;
        }
        p = p/10;
    }
    n++;
}
if(n ==1){
    cout<<1<<"\n";
}else{
cout<<n-1<<"\n";
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