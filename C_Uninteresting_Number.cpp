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
    string n;
    cin >> n;
    int sum = 0;
    int two = 0;
    int three = 0;
    for(char c : n){
        int k = c-'0';
        sum += k;
        if(k == 2){
            two++;
        }
        if(k == 3){
            three++;
        }
    }
    if(sum%9 == 0){
        YES;
        return;
    }
    int req = 9-(sum%9);
    for(int i =0;i <=min(two,8);i++){
        for(int j =0;j<=min(three,2);j++){
            if((2*i+6*j)%9 == req){
                YES;
                return;
            }
        }
    }
    NO;
}

int main() {
    fast_io

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}