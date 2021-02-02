#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
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
vector<vector<edge>> g;
vector<int> ans;

void dfs(int v, int p, int c) {
    ans[v] = c;
    for (auto e: g[v]) {
        if (e.u == p) continue;
        if (e.w % 2 == 1) dfs(e.u, v, 1 - c);
        else dfs(e.u, v, c);
    }
}

int main() {
    int n; cin >> n;
    g.assign(n, vector<edge>());
    REP(i, n - 1) {
        int u, v, w; cin >> u >> v >> w;
        u--; v--;
        g[u].push_back(edge{v, u, w});
        g[v].push_back(edge{u, v, w});
    }
    ans.assign(n, 0);
    dfs(0, -1, 0);
    for (auto e: ans) cout << e << endl;
}
