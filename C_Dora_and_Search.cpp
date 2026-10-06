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
    vector<int>a(n);
    for(int i =0;i<n;i++)cin>>a[i];
    int mn =1;
    int mx =n;
    int l =0;
    int r = n-1;
    while(l<r){
        if(a[l] == mn || a[l] == mx){
            if(a[l]== mn){
                mn++;
            }
            else{
                mx--;
            }
            l++;
        }
        else if(a[r] == mn || a[r] == mx){
            if(a[r]== mn){
                mn++;
            }
            else{
                mx--;
            }
            r--;
        }
        else{
            cout<<l+1<<" "<<r+1<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";

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