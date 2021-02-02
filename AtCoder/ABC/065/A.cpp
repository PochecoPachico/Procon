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
  int X, A, B;
  cin >> X >> A >> B;
  if (A - B >= 0) cout << "delicious" << endl;
  else if ((X + A) - B >= 0) cout << "safe" << endl;
  else cout << "dangerous" << endl;
}
