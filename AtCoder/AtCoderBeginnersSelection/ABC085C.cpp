/*
 * 何故詰まったか
 * ケースを考えられてなかった
 * 条件分岐、ループに入らなくなるケースを考えたらうまく見つけられた
 *
 */
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

int main() {
  int N, Y;
  int B1 = 1000, B5 = 5000, B10 = 10000;
  cin >> N >> Y;
  
  for(int x10 = min(N, Y / B10); x10 > 0; x10--) {
    int x5 = ((B10 - B1) * x10 - Y + B1 * N) / (B1 - B5);
    int x1 = N - (x10 + x5);
    if (x5 < 0 || x1 < 0) continue;
    if (Y == B10 * x10 + B5 * x5 + B1 * x1) {
      cout << x10 << " " << x5 << " " << x1 << " " << endl;
      return 0;
    }
  }

  for(int x5 = min(N, Y / B5); x5 > 0; x5--) {
    int x1 = N - x5;
    if (x5 < 0 || x1 < 0) continue;
    if (Y == B5 * x5 + B1 * x1) {
      cout << 0 << " " << x5 << " " << x1 << " " << endl;
      return 0;
    }
  }

  if (Y == B1 * N) {
    cout << 0 << " " << 0 << " " << N << " " << endl;
    return 0;
  }

  cout << -1 << " " << -1 << " " << -1 << endl;
}
