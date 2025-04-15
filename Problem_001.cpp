--Problem Link: https://codeforces.com/contest/1971/problem/D

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
      string s; cin>>s;
      int cnt = 0;
      for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i-1]) cnt++;
      }
      if(cnt == 0) cout<<1<<endl;
      else if(cnt == 1 && s[0] == '1' ) cout<<2<<endl;
      else if(cnt == 1 && s[0] == '0' ) cout<<1<<endl;
      else cout<<cnt<<endl;
    }   
    return 0;
}
