// # mohitj_18 #  
#include <bits/stdc++.h>
using namespace std;
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define iseven(n) ((n) % 2 == 0)
#define isodd(n) ((n) % 2 != 0)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    char c;
    cin>>n;
    cin>>c;
    string s;
    cin>>s;
    int l =0;
    int r = n-1;
    ll oper =0;
    while(l<r){
        if(s[l] !=s[r] && (s[l]==c || s[r] == c)){
            oper++;
        }
        else if(s[l] !=s[r] && s[l]!=c && s[r] != c){
            oper+=2;
        }
        l++;
        r--;
    }
    cout<<oper<<"\n";
}

int main() {
    fast_io
    int t = 1;
    cin >> t;
    while (t--){
      solve();
    }
    return 0;
}