#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
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
    vector<ll> e(n + 1);
    e[0] = 0;
    FOR(i, 1, n + 1) { 
        ll p; cin >> p; p += 1;
        e[i] = e[i - 1] + p;
    }

    ll ans = 0;
    FOR(i, 0, n - k + 1) { 
        ans = max(ans, e[i + k] - e[i]);
    }
    cout << fixed << setprecision(10) << double(ans) / 2 << endl;
}
