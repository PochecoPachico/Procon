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
  int a, b;
  cin >> a >> b;
  if ((a * b) % 2 == 0) cout << "Even" << endl;
  else cout << "Odd" << endl;
}
