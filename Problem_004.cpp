-- Problem Link: https://codeforces.com/contest/1604/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    bool cnt = false;
    for (int i = 1; i < n; i++){
      if(a[i] <= a[i-1]){
        cnt = true;
        break;
      }
    }

    if(n % 2 == 0) cout<<"YES"<<endl;
    else cout<<(cnt?"YES":"NO")<<endl;
  }
  return 0;
}
