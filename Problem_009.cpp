-- Problem Link: https://codeforces.com/problemset/problem/1917/B

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    string s; cin>>s;
    long long cnt = 0;
    set<char>uni;
    for(int i = 0; i < n; i++){
      uni.insert(s[i]);
      cnt += uni.size();
    }
    cout<<cnt<<endl;
  }
  return 0;
}
