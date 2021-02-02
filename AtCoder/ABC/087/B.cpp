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
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  int sum = 0, ans = 0;
  for (int i = 0; i <= A; i++) {
    for (int k = 0; k <= B; k++) {
      for (int l = 0; l <= C; l++) {
        sum = 500 * i + 100 * k + 50 * l;
        if (sum == X){ 
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
