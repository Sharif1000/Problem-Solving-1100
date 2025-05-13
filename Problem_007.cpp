-- Problem Link: https://codeforces.com/contest/1529/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      int neg = 0, zero = 0, pos = 0;
      for(int i = 0; i < n; i++){
        cin>>a[i];
        neg += (a[i] < 0);
        pos += (a[i] > 0);
        zero += (a[i] == 0);
      }
      
      sort(a, a+n);
      int mn = INT_MAX;
      int mx;
      for(int i = 1; i < n; i++){
        if(a[i] <= 0) mn = min(mn, abs(a[i] - a[i-1]));
        else{
          mx = a[i]; break;
        }
      }
      
      if(pos > 0 ){
        if(zero <= 1 && mn >= mx) cout<<neg+zero+1<<endl;
        else cout<<neg+zero<<endl;
      }
      else cout<<neg+zero<<endl;
    }
    return 0;
}
