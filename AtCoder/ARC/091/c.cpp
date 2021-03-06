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
    ll n, m; cin >> n >> m;
    ll ans = 0;
    if (m == 1 && n == 1) {
        ans = (m - 2) * (n - 2);
    } else if (m == 1) {
        ans = n - 2;
    } else if (n == 1) {
        ans = m - 2;
    } else {
        ans = (m - 2) * (n - 2);
    }
    cout << ans << endl;
}
