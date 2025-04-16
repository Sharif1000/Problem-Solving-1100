--Problem Link: https://codeforces.com/contest/1999/problem/D

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      string s,t;
      cin>>s>>t;
      bool flag = false;
      int i = 0, j = 0;
      while( i < t.size() && j < s.size()){
        if(s[j] == '?' || s[j] == t[i]){
          s[j] = t[i];
          i++;
          j++;
        }
        else if(s[j] != t[i]) j++;
      }
      if(i == t.size()) flag = true;
      while(j < s.size()){
        if(s[j] == '?') {s[j] = 'x'; j++;}
        else j++;
      }
      (flag) ? cout<<"YES"<<endl<<s<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
