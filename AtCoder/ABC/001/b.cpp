#include <iostream>
#include <string>
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
  int m;
  cin >> m;
  if (m < 100) cout << "00" << endl;
  if (m >= 100 && m < 1000)  cout << "0" + to_string(m / 100) << endl;
  if (m >= 1000 && m <= 5000)  cout << m / 100 << endl;
  if (m >= 6000 && m <= 30000)  cout << (m / 1000) + 50 << endl;
  if (35000 <= m && 70000 >= m) cout << (((m / 1000) - 30) / 5) + 80 << endl;
  if (m > 70000) cout << 89 << endl;
  return 0;
}
