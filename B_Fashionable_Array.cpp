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
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++)cin>>a[i];
    sort(a.rbegin(),a.rend());
    map<int,int>mp;
    for(int i =0;i<n;i++){
        mp[a[i]]++;
    }
    int j =0;
    vector<int>c;
    while(j<n){
        if(mp[a[j]]>0){
            mp[a[j]]--;
            c.push_back(a[j]);
            for(auto &it : mp){
                if(it.first != a[j]){
                    if(it.second != 0){
                        c.push_back(it.first);
                        it.second--;
                    }
                }
            }
        }
        j++;
    }

    for(int i =0;i<n;i++){
        cout<<c[i]<<" ";
    }

    cout<<"\n";
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