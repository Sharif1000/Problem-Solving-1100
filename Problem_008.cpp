-- Problem Link: https://codeforces.com/contest/1686/problem/C

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        
        sort(ar,ar+n);
        vector<int>v;
        bool flag = true;
        if(n%2==1){
            cout<<"NO"<<endl;
            flag = false;
        }
        else{
          int j = n / 2;
          for(int i=0; i<n/2; i++){
              v.push_back(ar[i]);
              v.push_back(ar[i+j]);
          }
          v.push_back(v[0]);
          v.push_back(v[1]);
          for(int i=1;i<v.size()-1;i++){
              if(v[i]>v[i-1] && v[i]>v[i+1])continue;
              else if(v[i]<v[i-1] && v[i]<v[i+1])continue;
              else{
                  flag = false;
                  break;
              }
          }
          if(!flag) cout<<"NO"<<endl;
          else{
              cout<<"YES"<<endl;
              for(int i=0;i<n;i++){
                  cout<<v[i]<<" ";
              }
              cout<<endl;
          }
     }
    }
    return 0;
}
