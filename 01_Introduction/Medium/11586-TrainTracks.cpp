

#include "bits/stdc++.h"

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

vector<string> strip(string& s) {
  vector<string> ret;
  string to_ret = "";
  for (auto c: s) {
    if (c != ' ') to_ret += c;
    if ((int) to_ret.size() == 2) {
      ret.push_back(to_ret);
      to_ret = "";
    }
  }
  return ret;
}

int main() {
  // ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  string t;
  getline(cin, t);
  int tc = stoi(t);
  while (tc--) {
    string s;
    getline(cin, s);
    vector<string> vs = strip(s);
    map<char, int> mp;
    REP(i, (int) vs.size()) {
      REP(j, 2) {
        mp[vs[i][j]]++;
      }
    }
    
    if (mp['M'] > 1 && mp['F'] == mp['M']) cout << "LOOP\n";
    else cout << "NO LOOP\n";
  }

  return 0;
}


