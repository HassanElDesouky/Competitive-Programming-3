#include "bits/stdc++.h"

#define el "\n"
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int>	vi;
typedef vector<ll> vll;
const int OO = 0x3f3f3f3f;
const string ALPHA = "abcdefghijklmnopqrstuvwxyz";
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1}; // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction
const int M = 20000010;
bitset<20000010> bs;
vector<pair<ll, ll>> vpi;
int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(false); 
  cin.tie(0);
  int n;
  bs.set();
  bs[0] = bs[1] = 0;
  for (ull i = 2; i <= M; ++i) if (bs[i]) {
    for (ull j = i*i; j <= M; j +=i) bs[j] = 0;
  }

  for (ll i = 0; i < M-4; ++i)
    if (bs[i] && bs[i+2]) vpi.push_back({i, i+2});
  
  while (cin >> n) {
    n--;
    printf("(%lld, %lld)\n", vpi[n].first, vpi[n].second);
  }
 return 0;
}

/*


*/