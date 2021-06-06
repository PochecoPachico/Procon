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
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    REP(i, n) cin >> a[i];
    REP(i, n) cin >> b[i];
    REP(i, n) cin >> c[i];

    vector<ll> count(n + 1, 0);

    REP(i, n) {
        count[b[c[i] - 1]]++;
    }

    ll ans = 0;
    REP(i, n) {
        ans += count[a[i]];
    }
    cout << ans << endl;
}
