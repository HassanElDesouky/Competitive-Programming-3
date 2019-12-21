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
#define in cin
#define out cout
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

// search
string search_for_car(int value,
  vector<pair<string, pair<int, int>>>& v) {
  int count = 0;
  string name;
  for (auto ele: v) {
    int l = ele.second.first, h = ele.second.second;
    string n = ele.first;
    if (value >= l && value <= h) {
      // out << l << ' ' << h << ' ' << value << ' ' << name << el;
      count++;
      name = n;
    }
  }
  if (count == 1) return name;
  else return "UNDETERMINED";
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
  int tc; in >> tc;
  while (tc--) {
    int d; in >> d;
    vector<pair<string, pair<int, int>>> vt;
    while (d--) {
      string s; in >> s; int l, h; in >> l >> h;
      vt.push_back({s, {l, h}});
    }
    // sort(all(vt), sort2);
    const int size = (int) vt.size();
    int q; in >> q;
    while(q--) {
      int t; in >> t;
      out << search_for_car(t, vt) << el;
    }
    if (tc == 0) break;
    out << el;
  }
	return 0;
}


/*
CHEVROLET 7000 37000
HONDA 10000 45000
PEUGEOT 12000 44000
BMW 30000 75900









*/
