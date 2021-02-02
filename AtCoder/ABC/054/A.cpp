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
  int A, B;
  cin >> A >> B;
  if (A == B) {
    cout << "Draw" << endl;
  } else if (A == 1 || (B != 1 && A > B)) {
    cout << "Alice" << endl;
  } else if (B == 1 || (A != 1 && B > A)) {
    cout << "Bob" << endl;
  }
  return 0;
}
