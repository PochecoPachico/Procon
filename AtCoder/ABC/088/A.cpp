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
  int A, N;
  cin >> N >> A;
  if ((N % 500) <= A) cout << "Yes" << endl;
  else cout << "No" << endl;
}
