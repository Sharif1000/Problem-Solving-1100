-- Problem Link: https://codeforces.com/contest/1700/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    string s; cin>>s;
    if(s[0] == '9'){
      string ans = "";
      int c = 0;
      for(int i = n-1; i >= 0; i--){
        int x = s[i] - '0';
        x +=c;
        if(x > 1){
          ans += (11 - x) + '0';
          c = 1;
        }
        else{
          c = 0;
          if(x == 1) ans += '0';
          else ans += '1';
        }
      }
      reverse(ans.begin(), ans.end());
      cout<<ans<<endl;
    }
    else{
      string ans = "";
      for(int i = 0; i < n; i++){
        int x = s[i] - '0';
        int val = 9 - x;
        ans += val + '0';
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}
