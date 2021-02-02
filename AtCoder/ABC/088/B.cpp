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
  int N;
  int a[100];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> a[i];
  sort(a, a + N, greater<int>());

  int alice = 0, bob = 0;
  for (int i = 0; i < N; i++) {
    // Alice
    if (i % 2 == 0) alice += a[i];
    else bob += a[i];
  }

  cout << alice - bob << endl;
}
