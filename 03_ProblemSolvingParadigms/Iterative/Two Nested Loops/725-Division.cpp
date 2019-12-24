#include "bits/stdc++.h"

using namespace std;
#define el "\n"
#define F first
#define S second
#define PI 3.14159265358979323846  /* pi */
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
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1}; // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction
int main(){
	// ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
  int n, count = 0;
  while (scanf("%d", &n)) {
    if (!n) break;
    bool f = 0;
    count++;
    if (count > 1)
      printf("\n");
    for (int fghij = 1234; fghij <= 98765 / n; ++fghij) {
      int abcde = fghij * n;
      int tmp, used = (fghij < 10000);
      tmp  = abcde;
      while (tmp) {
        used |= 1 << (tmp % 10);
        tmp /= 10;
      }
      tmp = fghij;
      while (tmp) {
        used |= 1 << (tmp % 10);
        tmp /= 10;
      }
      if (used == (1<<10) - 1) {
        printf("%0.5d / %0.5d = %d\n", abcde, fghij, n);
        f = 1;
      }
    }
    if (!f) printf("There are no solutions for %d.\n", n);
    // puts("");
  }
	return 0;
}
