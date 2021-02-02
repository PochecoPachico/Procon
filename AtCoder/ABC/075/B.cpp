#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
  int H, W;
  char S[50][50];
  cin >> H >> W;
  for (int i = 0; i < H; i++)
    for (int k = 0; k < W; k++)
      cin >> S[i][k];

  for (int i = 0; i < H; i++) {
    for (int k = 0; k < W; k++) {
      int count = 0;
      if (S[i][k] == '#') {
        printf("#");
        continue;
      }
      // 左
      if (k != 0 && S[i][k - 1] == '#') count++;
      // 上
      if (i != 0 && S[i - 1][k] == '#') count++;
      // 右
      if (k != W - 1 && S[i][k + 1] == '#') count++;
      // 下
      if (i != H - 1 && S[i + 1][k] == '#') count++;

      // 左上
      if (k != 0 && i != 0 && S[i - 1][k - 1] == '#') count++;
      // 左下
      if (k != 0 && i != H - 1 &&  S[i + 1][k - 1] == '#') count++;
      // 右上
      if (k != W - 1 && i != 0 && S[i - 1][k + 1] == '#') count++;
      // 右下
      if (k != W - 1 && i != H - 1 && S[i + 1][k + 1] == '#') count++;
      printf("%d", count);
    }
    printf("\n");
  }
}
