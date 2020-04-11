#include "bits/stdc++.h"

#define el "\n"
#define all(v) ((v).begin()),((v).end())

using namespace std;

typedef long long ll;
typedef vector<int>	vi;
typedef vector<ll> vll;
const int OO = 0x3f3f3f3f;
const string ALPHA = "abcdefghijklmnopqrstuvwxyz";
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1}; // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction
  
int main() {
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(false); 
  cin.tie(0);
  
  int n, q;
  int t = 1;
  while(cin >> n >> q) {
    if (n == 0 && q == 0) break;
    vi v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(all(v));
    cout << "CASE# " << t++ << ":\n";
    while(q--) {
      int x;
      cin >> x;
      auto ans = lower_bound(all(v), x);
      cout << x;
      int i = ans-v.begin();
      if (i >= n || v[i] != x)
        cout << " not found\n";
      else 
        cout << " found at " << i+1 << el;

    }
  }
  
  return 0;
}

/*
*/
