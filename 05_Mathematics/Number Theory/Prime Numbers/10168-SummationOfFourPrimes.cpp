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
pair<int, int> solve(int x) { 
  int a, b;
  for (int i = 2; i <= x / 2; i++) { 
    if (bs[i] && bs[x - i]) { 
      a = i; 
      b = x - i; 
      return {a, b}; 
    } 
  } 
  return {0,0};
} 
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
  while (cin >> n) {
    if (n <= 7) {
      cout << "Impossible.\n";
      continue;
    }
    if (n&1) { 
      auto s = solve(n - 5);
      cout << "2 3 " << s.first << ' ' << s.second << el; 
    } else { 
      auto s = solve(n - 4);
      cout << "2 2 " << s.first << ' ' << s.second << el;
    } 
  }
 return 0;
}

/*


*/