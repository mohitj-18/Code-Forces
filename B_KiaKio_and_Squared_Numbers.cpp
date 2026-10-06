// # mohitj_18 #  
#define cycle(i,n) for(int i = 0; i < n; i++)
#define cycle(i,n) for(int i = 1; i <= n; i++)
#define rcycle(i,n) for(int i = n-1; i >= 0; i--)
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
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int x = a[i];
            int y = a[j];
            for(int k=0;k<100;k++){
                if(x==y){
                    ans++;
                    break;
                }
                int sx = 0;
                while(x){
                    int d = x%10;
                    sx+=d*d;
                    x/=10;
                }
                int sy = 0;
                while(y){
                    int d =y%10;
                    sy+=d*d;
                    y /= 10;
                }
                x = sx;
                y = sy;
            }
        }
    }
    cout<<ans<<"\n";
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