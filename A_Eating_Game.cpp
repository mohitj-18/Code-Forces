#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int q;
while(t--){
    cin>>n;
    vector<int>nums;
for(int i =0;i<n;i++){
    cin>>q;
nums.push_back(q);
}
int p =0;
int count =0;
for(int i =0;i<n;i++){
    p = max(p,nums[i]);
}
for(int i =0;i<n;i++){
    if(p == nums[i]){
        count++;
    }
}
cout<<count<<endl;
}
return 0;
} 
#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    
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