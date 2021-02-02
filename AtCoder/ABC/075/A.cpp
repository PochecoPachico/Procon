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
  int A, B, C;
  cin >> A >> B >> C;
  if (A == B) cout << C << endl;
  if (A == C) cout << B << endl;
  if (C == B) cout << A << endl;
}
