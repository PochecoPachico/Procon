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
  char C[2][3];

  for (int i = 0; i < 2; i++) {
    for (int k = 0; k < 3; k++) {
      cin >> C[i][k];
    }
  }

  for (int i = 0; i < 3; i++) {
    if (C[0][i] != C[1][2 - i]){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
