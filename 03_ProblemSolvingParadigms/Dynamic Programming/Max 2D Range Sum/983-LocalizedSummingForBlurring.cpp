#include "bits/stdc++.h"

using namespace std;
#define el "\n"
#define FOR(i,a,b) for(long long i = a; i <= b; ++i)
#define FORD(i,a,b) for(long long i = a; i >= b; --i)
#define RI(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(n)-1)
#define all(v) ((v).begin()),((v).end())
typedef long long ll;
typedef vector<int>	vi;
typedef vector<ll> vll;
const double EPS = 1e-9;
const int OO = 0x3f3f3f3f;
const string ALPHA = "abcdefghijklmnopqrstuvwxyz";
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1}; // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction
ll A[1003][1003], S[1003][1003];
int main() {
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(false); 
  cin.tie(0);
  int n, m, t = 0;
  while (cin >> n >> m) {
    if (t++) printf("\n");
    ll k = n-m+1, su = 0;
    
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
        cin >> A[n-i-1][j];
    
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) {
        if (i) A[i][j] += A[i-1][j];
        if (j) A[i][j] += A[i][j-1];
        if (i && j) A[i][j] -= A[i-1][j-1];
      }
      
    for (int i = 0; i < k; ++i)
      for (int j = 0; j < k; ++j) {
        S[i][j] = A[i+m-1][j+m-1];
        if (i) S[i][j] -= A[i-1][j+m-1];
        if (j) S[i][j] -= A[i+m-1][j-1];
        if (i && j) S[i][j] += A[i-1][j-1];
      }
      
    for (int i = 0; i < k; ++i)
      for (int j = 0; j < k;++j) {
        printf("%lld\n", S[k-i-1][j]);
        su += S[i][j];
      }
    
    printf("%lld\n", su);
  }
  return 0;
}

/*
*/
