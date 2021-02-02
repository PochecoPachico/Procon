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

ll combination(ll n, ll r) {
    vector<vector<ll>> v(n + 1, vector<ll>(n + 1, 0));
    REP(i, v.size()) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for (int i = 1; i < v.size(); i++) {
        for (int k = 1; k < i; k++) {
            v[i][k] = v[i - 1][k - 1] + v[i - 1][k];
        }
    }
    return v[n][r];
}

int main() {
    int x, y; cin >> x >> y;
    if ((x + y) % 3 != 0) { 
        cout << 0 << endl;
        return 0;
    }
    int n = (2 * y - x) / 3;
    int m = (2 * x - y) / 3;
    if (n < 0 || m < 0) {
        cout << 0 << endl;
        return 0;
    }
    cout << combination(n + m, n) % MOD << endl;
}
