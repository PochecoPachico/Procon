#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define REP(i, n)  FOR(i, 0, n)
#define ASC(c) sort((c).begin(), (c).end())
#define DESC(c) sort((c).begin(), (c).end(), greater<int>())

#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define DEBUG(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int solve(vector<int> h, int l) {
  if (l == 1) return h[0];
  int ans = 0, min = *min_element(h.begin(), h.end());
  int x = -1;
  REP(i, l) {
    if (h[i] == min) {
      x = i;
      continue;
    }
    h[i] -= min;
  }
  return min + solve(h, x) + solve(&h[x + 1], l - x);
}

int main() {
  int n; cin >> n;
  vector<int> h(n);
  vector<int> m(n);
  REP(i, n) cin >> h[i];

}
