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
  ll N, M;
  ll result;
  cin >> N >> M;
  if (N * 2 <= M) {
    result = N;
    result = result + (M - 2 * N) / 4;
  } else {
    result = M / 2;
  }
  cout << result << endl;
  return 0;
}
