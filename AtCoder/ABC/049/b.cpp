#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
  char C[100][100];
  int H, W;
  cin >> H >> W;
  for (int i = 0; i < H; i++)
    for (int j = 0; j < W; j++)
      cin >> C[i][j];

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      printf("%c", C[i][j]);
    }
    printf("\n");
    for (int j = 0; j < W; j++) {
      printf("%c", C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
