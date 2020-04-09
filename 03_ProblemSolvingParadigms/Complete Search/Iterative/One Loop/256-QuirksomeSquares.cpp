#include "bits/stdc++.h"

using namespace std;
#define el "\n"
#define F first
#define S second
#define M_PI 3.14159265358979323846  /* pi */
#define FOR(i,a,b) for(int i = a; i <= b; ++i)
#define FORD(i,a,b) for(int i = a; i >= b; --i)
#define RI(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(n)-1)
#define SQR(x) (x)*(x)
#define all(v)  	((v).begin()),((v).end())
#define degreesToRadians(angleDegrees) (angleDegrees * M_PI / 180.0) // Converts degrees to radians.
#define radiansToDegrees(angleRadians) (angleRadians * 180.0 / M_PI) // Converts radians to degrees.
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
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
  vector<string> v2 = {"00", "01", "81"};
  vector<string> v4 = {"0000","0001","2025","3025","9801"};
  vector<string> v6 = {"000000","000001","088209","494209","998001"};
  vector<string> v8 = {"00000000","00000001","04941729","07441984","24502500","25502500","52881984","60481729","99980001"};
  int n;
  while (cin >> n) {
      if (n == 2) for (auto x: v2) cout << x << el;
      else if (n == 4) for (auto x: v4) cout << x << el;
      else if (n == 6) for (auto x: v6) cout << x << el;
      else if (n == 8) for (auto x: v8) cout << x << el;
  }
	return 0;
}
