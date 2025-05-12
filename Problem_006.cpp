-- Problem Link: https://codeforces.com/contest/1509/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int m = 0, t = 0, mr = 0, tr = 0;
        bool flagl = true;
        bool flagr = true;
        
        for(int i = 0; i < n; i++){
          if(s[i] == 'T') t++;
          else m++;
          if(m > t) flagl = false;
        }
        
        for(int i = n-1; i >= 0; i--){
          if(s[i] == 'T') tr++;
          else mr++;
          if(mr > tr) flagr = false;
        }        

        if(t % 2 == 0 && m * 2 == t && flagl == true && flagr == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
