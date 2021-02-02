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
  cin >> H >> W;

  for (int i = 0; i < W + 2; i++) {
    printf("#");
  }
  printf("\n");

  for(int i = 0; i < H; i++) {
    printf("#");
    for(int j = 0; j < W; j++) {
      char c;
      cin >> c;
      printf("%c", c);
    }
    printf("#\n");
  }
  for (int i = 0; i < W + 2; i++) {
    printf("#");
  }
}
