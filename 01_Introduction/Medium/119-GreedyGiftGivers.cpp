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
//const int N = 1e3+2, M = 3e5+5, OO = 0x3f3f3f3f;
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1}; // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction

int main() {
    // ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	 //freopen("input.txt", "r", stdin);
	 //freopen("output.txt", "w", stdout);
	int N; 
	int T = 1;
	while (cin >> N) {
			map<string, int> mp;
			vector<string> names;
			
			REP(i, N) {
				string s; cin >> s;
				mp.insert({s, 0});
				names.push_back(s);
			}
			
			REP(i, N) {
				string s; int val, n; cin >> s >> val >> n;
				if (!n) continue;
				int new_val = val / n;
				mp[s] -= new_val * n;
				REP(j, n) {
					string ss; cin >> ss;
					mp[ss] += new_val;
				}
			}
			
			
			if (T++ > 1) cout << el;
			
			REP(i, N) {
				cout << names[i] << ' ' << mp[names[i]] << el;
			}
	}
    return 0;
}
