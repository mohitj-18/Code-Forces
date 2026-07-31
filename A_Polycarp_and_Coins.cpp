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
    int count =0;
    int ans;
    while(1){
        if(n%3 == 0){
            ans = n/3;
            break;
        }
        n--;
        count++;
    }
    if(count == 0){
        cout<<ans<<" "<<ans<<endl;
    }
    else if(count ==1){
        cout<<ans+1<<" "<<ans<<endl;
    }
    else{
        cout<<ans<<" "<<ans+1<<endl;
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