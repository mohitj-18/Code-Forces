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
    ll n,m;
    cin>>n>>m;
    vector<ll>a(m);
    for(int i =0;i<m;i++)cin>>a[i];
    sort(a.begin(),a.end());
    vector<ll>gap;
    if(a[0] !=1){
    gap.push_back(a[0]-1);
    }
    for(int i =0;i<m-1;i++){
        gap.push_back(a[i+1]-a[i] -1);
    }
    if(a[m-1] != n){
    gap.push_back(n-a[m-1]);
    }
    if(a[m-1] == n || a[0] ==1){
        sort(gap.rbegin(),gap.rend());
    }
    else{
        gap[0] = gap[0]+gap[gap.size() -1];
        gap.pop_back();
        sort(gap.rbegin(),gap.rend());
    }
    int j =0;
    while(j<gap.size() && gap[j] !=0){
        if(gap[j] >1){
        gap[j]= gap[j] -1;
        }
        for(int p =j+1;p<gap.size();p++){
            if(gap[p]>=4){
            gap[p] = gap[p] -4;
            }
            else{
                gap[p] =0;
            }
        }
        j++;
    }
    ll sum =0;
    for(int i =0;i<gap.size();i++){
        sum+=gap[i];
    }
    cout<<n-sum<<"\n";
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