

#include "bits/stdc++.h"
#include <stdio.h>

using namespace std;
#define el "\n"
#define F first
#define S second
#define PI 3.14159265358979323846  /* pi */
#define INF 9876543210LL
#define FOR(i,a,b) for(int i = a; i <= b; ++i)
#define FORD(i,a,b) for(int i = a; i >= b; --i)
#define RI(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(n)-1)
#define SQR(x) (x)*(x)
#define all(v)  	((v).begin()),((v).end())
#define degreesToRadians(angleDegrees) (angleDegrees * PI / 180.0) // Converts degrees to radians.
#define radiansToDegrees(angleRadians) (angleRadians * 180.0 / PI) // Converts radians to degrees.
typedef long long ll;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef long double ld;
typedef vector<int>		vi;
typedef vector<ll>		vll;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;
const double EPS = 1e-9;
const int N = 1e3+2, M = 3e5+5, OO = 0x3f3f3f3f;
const string ALPHA = "abcdefghijklmnopqrstuvwxyz";
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1}; // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction

int main() {
  // ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int tc; cin >> tc;
  int t = 1;
  char command[100005];
  getchar();
  while (tc--) {
    gets(command);
    unsigned char mem[100] = {};
    int id = 0;
    for(int i = 0; command[i]; ++i) {
      if(command[i] == '>') id++;
      else if (command[i] == '<') id--;
      else if (command[i] == '+') mem[id]++;
      else if (command[i] == '-') mem[id]--;
      if (id >= 100) id = 0;
      if (id < 0 ) id = 99;
    }
    printf("Case %d:", t++);
    REP(i, 100) printf(" %02X", mem[i]);
    puts("");
  }
  return 0;
}
