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
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1}; // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction

int getClosest(int val1, int val2, int target) { 
    if (target - val1 >= val2 - target) 
        return val2; 
    else
        return val1; 
} 
  
int findClosest(vector<int>& arr, int target) { 
    int n = (int) arr.size();

    if (target <= arr[0]) 
        return arr[0]; 
    if (target >= arr[n - 1]) 
        return arr[n - 1]; 

    int i = 0, j = n, mid = 0; 
    while (i < j) { 
        mid = (i + j) / 2; 
        if (arr[mid] == target) 
            return arr[mid]; 
        if (target < arr[mid]) { 
            if (mid > 0 && target > arr[mid - 1]) 
                return getClosest(arr[mid - 1], arr[mid], target); 
            j = mid; 
        } else { 
            if (mid < n - 1 && target < arr[mid + 1]) 
                return getClosest(arr[mid], arr[mid + 1], target); 
            i = mid + 1;  
        } 
    } 
    return arr[mid]; 
} 


int main() {
    // ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

    int n; 
    int tc = 0;
    while (scanf("%d", &n)) {
        if (!n) break;
        vector<int> v(n);
        for(int& i: v) scanf("%d", &i);
        int m; scanf("%d", &m);
        printf("Case %d:\n", ++tc);
        vector<int> pairs;
            for (int i = 0; i < n; ++i) 
                for (int j = i+1; j < n; ++j) 
                    pairs.push_back(v[i]+v[j]);
        sort(all(pairs));
        while (m--) {
            int val; scanf("%d", &val);
            int clos = findClosest(pairs, val);
            printf("Closest sum to %d is %d.\n", val, clos);
        }
    }
    return 0;
}