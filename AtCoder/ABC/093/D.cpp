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
  int Q;
  int A[100], B[100];
  cin >> Q;
  REP(i, Q) {
    cin >> A[i];
    cin >> B[i];
  } 
  int count = 0;
  FOR(i, 0, Q) {
    int mul = A[i] * B[i];
    for(int k = 1; k <= A[i]; k++) {
      for(int l = k + 1; l <= B[i]; l++) {
        if (k == l) continue;
        int tmp = k * l;
        DEBUG(k);
        DEBUG(l);
        if (mul <= tmp) {
          cout << count * 2 << endl;
          return 0;
        }
        count++;
      }
    }
  }
}
