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
    vector<int> p(n);
    REP(i, n) cin >> p[i];
    ll ans = 0;
    int mx = max(p[0], p[1]), sc = min(p[0], p[1]);
    FOR(i, 0, n - 1) {
        FOR(k, i + 1, n) { 
            if (p[k] > mx) {
                sc = mx;
                mx = p[k];
                ans += sc;
                continue;
            }
            if (p[k] < mx && p[k] > sc) sc = p[k];
            ans += sc;
        }
        mx = max(p[i + 1], p[i + 2]);
        sc = min(p[i + 1], p[i + 2]);
    }
    cout << ans << endl;
}
