-- Problem Link: https://codeforces.com/contest/1682/problem/B

-- First Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int res = (1 <<32) - 1;
      for(int i = 0; i < n; i++){
        int x; cin>>x;
        if(x != i) res &= x;
      }
      cout<<res<<endl;
    }
    return 0;
}



-- Second Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      vector<int>v;
      for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i] != i) v.push_back(a[i]);
      }
      int res = v[0];
      for(int i = 1; i < v.size(); i++){
        res &=v[i];
      }
      cout<<res<<endl;
    }
    return 0;
}
