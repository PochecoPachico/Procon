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
    ll m; cin >> m;
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    DESC(a);

    ll count = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        for (int k = i; k < n; k++) {
            ans += a[i] + a[k];
            if (count == 0) {
                count++; continue;
            }
            count++;
            if (count < m) {
                ans += a[k] + a[i];
                count++;
            }
            if (count == m) {
                DEBUG(count);
                cout << ans << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
