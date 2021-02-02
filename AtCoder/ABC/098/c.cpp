#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

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
  int n; cin >> n;
  int m = 3000000;
  vector<int> w(n, 0);
  vector<int> e(n, 0);
  string s; cin >> s;

  for (int i = 1; i < n; i++) {
    if (s[i - 1] == 'W')
      w[i] = 1 + w[i - 1];
    else
      w[i] = w[i - 1];
  }
  for (int i = n - 2; i >= 0; i--) {
    if (s[i + 1] == 'E')
      e[i] = 1 + e[i + 1];
    else
      e[i] = e[i + 1];
  }
  int min = e[0] + w[0];
  for (int i = 1; i < n; i++) {
    if (min > e[i] + w[i]) min = e[i] + w[i];
  }
  cout << min << endl;
}

