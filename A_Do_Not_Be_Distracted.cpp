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
    string s;
    cin>>s;
    set<char>str;
    str.insert(s[0]);
    for(int i =1;i<n;i++){
        if(s[i] != s[i-1]){
            if(str.count(s[i])){
                cout<<"NO"<<"\n";
                return;
            }
        }
        str.insert(s[i]);
    }
    cout<<"YES"<<"\n";
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