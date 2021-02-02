#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define REP(i, n)  FOR(i, 0, n)
#define ASC(c) sort((c).begin(), (c).end())
#define DESC(c) sort((c).begin(), (c).end(), greater<int>())

#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define DEBUG(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
  int n;cin >> n;
  int  a[2 * 100000 + 1];
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] -= i;
  }

  sort(a + 1, a + n + 1);
  int b1 = a[n / 2 + 1];
  int b2 = a[n / 2];
  ll ans1 = 0;
  ll ans2 = 0;
  for(int i = 1; i <= n; i++) {
    ans1 += abs(a[i] - b1);
    ans2 += abs(a[i] - b2);
  }

  cout << min(ans1, ans2) << endl;

}
