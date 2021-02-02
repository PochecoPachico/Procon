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
    vector<int> a(n + 1), ans(n + 1);
    FOR(i, 1, n + 1) cin >> a[i];

    // iの倍数を後ろから見ていく
    for (int i = n; i > 0; i--) {
        int s = 0;
        for (int k = 2 * i; k <= n; k += i) s += ans[k];
        if (s % 2 != a[i]) ans[i] = 1;
    }
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        if (ans[i] == 1) v.push_back(i);
    }
    cout << v.size() << endl;
    for (auto e: v) cout << e << " ";
    cout << endl;
}
