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
  int H, W; cin >> H >> W;
  // vectorの初期化
  // http://d.hatena.ne.jp/Conpara02/20120814/1344931449
  // 座標中のある点の周りの確認する処理を実装する場合、周りを囲んでしまったほうが境界判定が楽
  vector< vector<char> > s(H + 2, vector<char>(W + 2, '.'));
  FOR(i, 1, H + 1) {
    FOR(k, 1, W + 1) {
      cin >> s[i][k];
    }
  }

  FOR(i, 1, H + 1) {
    FOR(k, 1, W + 1) {
      if (s[i][k] == '#' && (s[i - 1][k] != '#' && s[i][k + 1] != '#' && s[i + 1][k] != '#' && s[i][k - 1] != '#')) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}
