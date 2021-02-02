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
  int N;
  int a[100];
  i_i W, H;
  
  W.first = 0;
  H.first = 0;
  cin >> W.second >> H.second >> N;
 
  for (int i = 0; i < N; i++) {
    int x, y, a;
    cin >> x >> y >> a;
 
    switch (a) {
      case 1:
        if (W.first < x)
          W.first = x;
        break;
      case 2:
        if (W.second > x)
          W.second = x;
        break;
      case 3:
        if (H.first < y)
          H.first = y;
        break;
      case 4:
        if (H.second > y)
          H.second = y;
        break;
      default:
        break;
    }
  }
 
  if ((W.second - W.first) > 0 && (H.second - H.first) > 0)
    printf("%d", (W.second - W.first) * (H.second - H.first));
  else printf("0");
  
}
