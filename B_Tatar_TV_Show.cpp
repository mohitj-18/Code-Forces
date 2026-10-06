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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i =0;i<n-k;i++){
        if(s[i] =='1'){
            s[i] ='0';
            if(s[i+k] =='1'){
                s[i+k]='0';
            }
            else{
                s[i+k] ='1';
            }
        }
    }
    int count =0;
    for(int i =0;i<n;i++){
        if(s[i] =='0'){
            count++;
        }
    }
    if(count ==n){
        YES;
    }
    else{
        NO;
    }
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