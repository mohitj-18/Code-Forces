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
    int p;
    int even =0;
    int odd =0;
    cin>>n;
    vector<int>nums;
    for(int i =0;i<2*n;i++){
        cin>>p;
        nums.push_back(p);
    }
    for(int i =0;i<2*n;i++){
        if(nums[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even == odd){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
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