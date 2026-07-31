#include<iostream>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   int t;
   cin>> t;
   int n;
   int p;
   int sum;
   int blue =1;
   while(t--){
    sum =0;
        vector<int>nums;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>p;
        nums.push_back(p);
    }
    for(int i =0;i<n;i++){
        if(sum == nums[i]){
            cout<<"NO"<<endl;
            blue =0;
            break;
        }
        sum+=nums[i];
    }
    if(blue){
    cout<<"YES"<<endl;
    for(int i =n-1;i>=0;i--){
        cout<<nums[i]<<" ";
    }
    cout<<"\n";
}

   }
return 0;
} 