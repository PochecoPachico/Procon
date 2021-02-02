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
    vector<vector<pair<int, int>>> v(n);
    REP(i, n) {
        int a; cin >> a;
        REP(k, a) {
            int x, y; cin >> x >> y;
            v[i].push_back(make_pair(x, y));
        }
    }
    int ans = 0;
    for (int bits = 1; bits < (1 << n); bits++) {
        bool f = true;
        vector<int> h(n, 0);
        for (int i = 0; i < n; i++) {
            int x = (bits >> i) & 1;
            if (x == 1) h[i] = 1;
        }
        for (int i = 0; i < n; i++) {
            if (h[i]) {
                for (auto e:v[i]) {
                    if (h[e.first - 1] != e.second) f = false;
                }
            }

        }
        int count = 0;
        for (int i = 0; i < h.size(); i++) if (h[i] == 1) count++;
        if (f) {
            ans = max(ans, count);
        }
    }
    cout << ans << endl;
}
