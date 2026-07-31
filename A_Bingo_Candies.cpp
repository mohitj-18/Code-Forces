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
 unordered_map<int,int> map;
        for (int i = 0;i < n*n;i++) {
            int x;
            cin >> x;
            map[x]++;
        }
        int a = 1;
        for (auto p : map){
            if(p.second > n*(n-1)){
                a =0;
                break;
            }
        }
        if(a){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
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