#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<ll, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> d_d;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
  int N, M;
  int T[100], P[100], X[100];
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> T[i];
  }
  cin >> M;
  for (int i = 0; i < M; i++) {
    cin >> P[i] >> X[i];
  }

  for (int i = 0; i < M; i++) {
    int sum = 0;
    for (int j = 0; j < N; j++) {
      if (j == P[i] - 1) sum += X[i];
      else sum += T[j];
    }
    cout << sum << endl;
  }
  return 0;
}
