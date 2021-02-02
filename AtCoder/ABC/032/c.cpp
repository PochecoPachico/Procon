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
  int n, k; cin >> n >> k;
  vector<int> s(n);
  // 0があったら最大の長さはn
  REP(i, n) { 
    cin >> s[i];
    if (s[i] == 0) {
      cout << n << endl;
      return 0;
    }
  }

  int max_len = 0;
  ll mul = 1;
  int right = 0;
  for(int left = 0; left < n; left++) {
    while(right < n && mul * s[right] <= k) {
      mul *= s[right++];
    }
    max_len = max(max_len, right - left);
    if (left == right) right++;
    else mul /= s[left];
  }
  cout << max_len << endl;
}
