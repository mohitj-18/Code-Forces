#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int k;
    cin>>k;
    int count =0;
    for(int i =1;i<=1666;i++){
        if(!(i%3 ==0 || i%10 == 3)){
            count++;
        }
        if(count == k){
            cout<<i<<"\n";
            break;
        }
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