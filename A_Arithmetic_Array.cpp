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
    int p;
    int i = 0;
    int sum =0;
    while(i<n){
        cin>>p;
        sum+=p;
        i++;
    }
    if(sum ==n){
        cout<<0<<"\n";
    }
    else if(sum<n){
        cout<<1<<"\n";
    }
    else{
        cout<<sum -n<<"\n";
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