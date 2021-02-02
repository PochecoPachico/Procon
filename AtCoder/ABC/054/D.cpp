#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };

ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;
int dp[40 + 1][10 * 40 + 1][10 * 40 + 1];

int main() {
  int N, M_a, M_b;
  int a[40], b[40], c[40];

  cin >> N >> M_a >> M_b;
  for (int i = 0; i < N; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  fill(dp[0][0], dp[41][0], 5000);
  dp[0][0][0] = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= 40 * 10; j++) {
      for (int k = 0; k <= 40 * 10; k++) {
        if (dp[i][j][k] == 5000) continue;
        dp[i + 1][j + a[i]][k + b[i]] = min(dp[i + 1][j + a[i]][k + b[i]], dp[i][j][k] + c[i]);
        dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
      }
    }
  }

  int ans = 5000;
  for (int i = 1; i <= 40 * 10; i++) {
    for (int j = 1; j <= 40 * 10; j++) {
      if(M_a * j == M_b * i) ans = min(ans, dp[N][i][j]); 
    }
  }
  if(ans == 5000) ans = -1;
  cout << ans << endl;
  return 0;
}
