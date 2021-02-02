/*
 * とりあえず紙に書いて観察
 * ある地点から時間tである地点まで行ける条件を列挙
 * 1. 時間が足りていること、すなわち|前の地点 - 次の地点| <= 時間
 * 2. 持ち時間 - 到着時刻 - 現在の時間 が偶数
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
  int N; cin >> N;
  vector<int> t(N), x(N), y(N);
  REP(i, N) cin >> t[i] >> x[i] >> y[i];


  int prev_x = 0, prev_y = 0, prev_time = 0;
  REP(i, N) {
    int time = abs(x[i] - prev_x) + abs(y[i] - prev_y);
    if (t[i] >= time && (t[i] - time - prev_time) % 2 == 0) {
      prev_x = x[i]; prev_y = y[i]; prev_time = t[i];
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
