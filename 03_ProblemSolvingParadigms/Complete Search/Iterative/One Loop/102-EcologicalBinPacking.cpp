#include "bits/stdc++.h"

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
#define el '\n'
#define F first
#define S second
// #define M_PI 3.14159265358979323846  /* pi */
#define FOR(i,a,b) for(int i = a; i <= b; ++i)
#define FORD(i,a,b) for(int i = a; i >= b; --i)
#define RI(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(n)-1)
#define SQR(x) (x)*(x)
#define all(v)  	((v).begin()),((v).end())
#define degreesToRadians(angleDegrees) (angleDegrees * M_PI / 180.0) // Converts degrees to radians.
#define radiansToDegrees(angleRadians) (angleRadians * 180.0 / M_PI) // Converts radians to degrees.
// #define ordered_set1 tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
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
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction

int main(){
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  char first, second, third;
  int B[3], G[3], C[3], smallest, tmp; // bottle
  while(cin >> B[0] >> G[0] >> C[0] >> B[1] >> G[1] >> C[1] >> B[2] >> G[2] >> C[2]) {
      smallest = B[1] + B[2] + C[0] + C[2] + G[0] + G[1]; // BCG
      first = 'B'; second = 'C'; third = 'G';
      tmp = B[1] + B[2] + G[0] + G[2] + C[0] + C[1]; // BGC
      if(tmp < smallest) {
        smallest = tmp;
        first = 'B'; second = 'G'; third = 'C';
      }

      tmp = C[1] + C[2] + B[0] + B[2] + G[0] + G[1]; // CBG
      if(tmp < smallest) {
        smallest = tmp;
        first = 'C'; second = 'B'; third = 'G';
      }

      tmp = C[1] + C[2] + G[0] + G[2] + B[0] + B[1]; // CGB
      if(tmp < smallest) {
       smallest = tmp;
       first = 'C'; second = 'G'; third = 'B';
     }

     tmp = G[1] + G[2] + B[0] + B[2] + C[0] + C[1]; // GBC
     if(tmp < smallest) {
      smallest = tmp;
      first = 'G'; second = 'B'; third = 'C';
      }

    tmp = G[1] + G[2] + C[0] + C[2] + B[0] + B[1]; // GCB
    if(tmp < smallest) {
       smallest = tmp;
       first = 'G'; second = 'C'; third = 'B';
    }
   cout << first << second << third << " " << smallest << el;
  }
  return 0;
}


/*


*/
