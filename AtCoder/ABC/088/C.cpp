#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;
int main() {
  int c[4][4];
  int a[4], b[4];
  for (int i = 1; i < 4; i++)
    for (int k = 1; k < 4; k++)
      cin >> c[i][k];
  
  a[1] = 0;
  for (int i = 1; i < 4; i++) b[i] = c[1][i];
  for (int i = 2; i < 4; i++) a[i] = c[i][1] - b[1];

  for (int i = 1; i < 4; i++) {
    for (int k = 1; k < 4; k++) {
      if (c[i][k] != a[i] + b[k]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
