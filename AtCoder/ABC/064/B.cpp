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
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a, a + N);
  cout << a[N - 1] - a[0] << endl;

  return 0;
}
