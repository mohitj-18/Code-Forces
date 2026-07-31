#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,k;
    cin>>n;
    cin>>k;
    vector<int>nums(n);
    for(int i =0;i<n;i++)cin>>nums[i];
    int p =INT_MAX;
    if(k == 5 || k == 3){
        for(int i =0;i<n;i++){
            p = min(p,(k-nums[i]%k)%k);
        }
        cout<<p<<"\n";
    }
    int q;
    if(k ==2){
        int even =0;
        for(int i =0;i<n;i++){
            if(nums[i]%2 ==0){
                even++;
            }
        }
            q = max(0,1-even);
            cout<<q<<"\n";
    }
    if(k ==4){
        int even =0;
        for(int i =0;i<n;i++){
            if(nums[i]%2 ==0){
                even++;
            }   
        }
        int cost1 =max(0,2-even);
        int cost2 = INT_MAX;
        for(int i =0;i<n;i++){
            if(n>=2){
                cost2 = min(cost2,(4-nums[i]%4)%4);
            }
        }
        cout<<min(cost1,cost2)<<"\n";
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