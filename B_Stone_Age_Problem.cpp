#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    for(int i =0;i<n;i++)cin>>a[i];
    ll sum =0;
    for(int i =0;i<n;i++){
        sum+=a[i];
    }
    while(q){
        int t;
        cin>>t;
        if(t==1){
            ll i,x;
            cin>>i>>x;
            ll k =a[i-1];
             a[i-1] =x;
             sum = sum+x-k;
             cout<<sum<<"\n";
        }
        else{
            ll x1;
            cin>>x1;
            a.assign(n,x1);
            sum = x1*n;
            cout<<sum<<"\n";
        }
        q--;
    }
    return 0;
}