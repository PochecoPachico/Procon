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

// 2のx乗をmodで割る
long powermod(long x, long mod) {
  if (x == 0) return 1;
  if (x == 1) return 2;
  else return 2 * powermod((x-1), mod) % mod;
}

int main() {
  int N;
  int A[100000], tb[100000] = {0};
  cin >> N;
  for (int i = 0; i < N; i++) {
    int input_num;
    cin >> input_num;
    tb[input_num]++;
  }

  if (N % 2 == 0) {
    // 偶数
    for (int i = 0; i < N; i++) {
      if ((i % 2 == 1 && tb[i] != 2) || (i % 2 == 0 &&tb[i] != 0) ) {
        cout << 0 << endl;
        return 0;
      }
    }
  } else {
    // 奇数
    if (tb[0] != 1) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 1; i < N; i++) {
      if ((i % 2 == 0 && tb[i] != 2) || (i % 2 == 1 && tb[i] != 0) ) {
        cout << 0 << endl;
        return 0;
      }
    }
  }
  cout << powermod(N/2, MOD) << endl;
  return 0;
}
