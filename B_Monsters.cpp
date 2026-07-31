#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int find_max(vector<int>a){
    int n = a.size();
    int q= INT_MIN;
    int p;
    for(int i =0;i<n;i++){
       if(a[i]>q){
        q = a[i];
        p =i;
       }
    }
    return p;
    
}
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b;
    for(int i =0;i<n;i++)cin>>a[i];
    while(1){
        int h = find_max(a);
        a[h] -=k;
        if(a[h] <=0){
            b.push_back(h+1);
        }
        if(b.size() == n){
            break;
        }
    }
    for(int i =0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
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