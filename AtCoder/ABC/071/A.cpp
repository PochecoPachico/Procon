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
  int x, a, b;
  cin >> x >> a >> b;
  if(abs(x - a) > abs(x - b)) {
    cout << "B" << endl;
  } else {
    cout << "A" << endl;
  }
}
