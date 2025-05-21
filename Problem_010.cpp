-- Problem Link: https://codeforces.com/contest/1783/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    vector<int>v(n *n);
    int l = 1, r = n * n;
    for(int i = 0; i < n*n; i++){
      if(i % 2 == 0){
        v[i] = l;
        l++;
      }
      else{
        v[i] = r;
        r--;
      }
    }
    int x = 0;
    for(int i = 0; i < n; i++){
      if(i % 2 == 0){
        for(int j = 0; j < n; j++){
          cout<<v[x]<<" ";
          x++;
        }
      }
      else{
        int k = x + n -1;
        for(int j = 0; j < n; j++){
          cout<<v[k]<<" ";
          k--;
          x++;
        }
      }
      cout<<endl;
    }
  }
  return 0;
}
