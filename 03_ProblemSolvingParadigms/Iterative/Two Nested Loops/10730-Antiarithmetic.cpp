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

int seen[10004];

int main() {
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  //ios::sync_with_stdio(false); 
  //cin.tie(0);
  
  int n;
  while (scanf("%d: ", &n), n) {
    vi v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    bool t = 1;
    
    for (int i = 0; i < n; ++i) {
      memset(seen, 0, sizeof seen);
      for (int j = 0; j <= i; ++j) seen[v[j]] = 1;
      for (int j = i+1; j < n; ++j) {
        seen[v[j]] = 1;
        int nx = v[j]+v[j]-v[i];
        if ((nx >= 0 && nx < n && j < n-1) && !seen[nx]) t = 0;
      }
    }
    
    if (!t) cout << "no\n";
    else cout << "yes\n";
  }
  return 0;
}

/*
*/
