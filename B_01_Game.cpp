#include <bits/stdc++.h>
using namespace std; 

/* --- Macros & Typedefs --- */
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s;
    cin>>s;
    int count0 =0;
    int count1 = 0;
    for(int i =0;i<s.length();i++){
        if(s[i] == '0'){
            count0++;
        }
        else{
            count1++;
        }
    }
    int k = min(count0,count1);
    if(k%2 ==1){
        cout<<"DA"<<"\n";
    }
    else{
        cout<<"NET"<<"\n";
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