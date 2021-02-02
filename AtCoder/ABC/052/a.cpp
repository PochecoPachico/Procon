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
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  if (A * B > C * D) {
    cout << A * B << endl;
  } else {
    cout << C * D << endl;
  }
  return 0;
}
