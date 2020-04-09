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
  
  int t; cin >> t;
  
  while(t--) {
    int n; cin >> n;
    int p; cin >> p;
    vi v(p); 
    for (int i = 0; i < p; ++i) cin >> v[i];
    
    int mask, sum = 0;
    for (mask = 0; mask < (1 << p); ++mask) {
      sum = 0;
      for (int j = 0; j < p; ++j)
        if (mask & (1<<j)) sum += v[j];
      if (sum == n) break;
    }
    
    if (sum == n) cout << "YES\n";
    else cout << "NO\n";    

  }
  
  return 0;
}

/*
*/
