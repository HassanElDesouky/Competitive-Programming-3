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

int used[10] = {};
char s[11] = {};
int ans[100000] = {}, at = 0;
void check(int idx) {
    if(idx == 0)
        return;
    s[idx] = '\0';
    int i, ti, len, cnt = 0;
    char ts[11];
    memcpy(ts, s, sizeof(ts));
    len = strlen(ts);
    for(i = 0; ;) {
        if(ts[i] == -1) {
            if(cnt == len && i == 0) {
                int n;
                sscanf(s, "%d", &n);
                ans[at++] = n;
                return;
            }
            return;
        }
        cnt++;
        ti = i + ts[i]-'0';
        ts[i] = -1;
        i = ti;
        if(i >= len)
            i %= len;
    }
}
void dfs(int idx) {
    check(idx);
    int i;
    for(i = 1; i <= 9; i++) {
        if(used[i] == 0) {
            s[idx] = i+'0';
            used[i] = 1;
            dfs(idx+1);
            used[i] = 0;
        }
    }
}

int main(){
	// ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n, test = 0, tmp;
	dfs(0);
	sort(ans, ans+at);
	while(scanf("%d", &n) == 1 && n) {
			for(int i = 0; i < at; i++)
					if(ans[i] >= n) {
							tmp = ans[i];
							break;
					}
			printf("Case %d: %d\n", ++test, tmp);
	}

	return 0;
}
