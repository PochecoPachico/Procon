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

int gcd(int a, int b) {
  if (b == 0) return a;
  if (a == 0) return b;
  return gcd(b, a % b);
}

int main() {
  int n; cin >> n;
  vector<int> a(n), m(n);
  REP(i, n) cin >> a[i];

  int l = 0, r = a[1];

  FOR(i, 1, n) {
    r = gcd(r, a[i]);
  }
  m[0] = gcd(l, r);

  FOR(i, 1, n) {
    l = gcd(l, a[i - 1]);
    r = a[i + 1];
    FOR(k, i + 1, n + 1) {
      if (k == n) { 
        r = 0; 
        break;
      }
      r = gcd(r, a[k]);
    }
    m[i] = gcd(l, r);
  }
  cout << *max_element(m.begin(), m.end()) << endl;
}
