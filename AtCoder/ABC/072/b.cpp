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

ll manhattan_distance(ll a, ll b, ll c, ll d) {
    return abs(a - c) + abs(b - d);
}

int main() {
    int n, m; cin >> n >> m;
    vector<ll> a(n), b(n);
    vector<ll> c(m), d(m);

    REP(i, n) cin >> a[i] >> b[i];
    REP(i, m) cin >> c[i] >> d[i];

    REP(i, n) {
        ll mn = 1000000000;
        int mn_k = -1;
        REP(k, m) {
            ll new_d = manhattan_distance(a[i], b[i], c[k], d[k]);
            if (new_d < mn) {
                mn = min(mn, new_d);
                mn_k = k;
            }
        }
        cout << mn_k + 1 << endl;
    }

}
