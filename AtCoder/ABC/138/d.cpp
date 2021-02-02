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

vector<vector<int>> g(200001);
vector<int> c(200001);

void solve(int i, int p) {
    c[i] += c[p];
    for (auto e: g[i]) {
        if (e == p) continue;
        else solve(e, i);
    }
}

int main() {
    int n, q; cin >> n >> q;
    REP(i, n - 1) {
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    REP(i, q) {
        int p, x; cin >> p >> x;
        c[p] += x;
    }
    solve(1, 0);
    FOR(i, 1, n + 1) {
        cout << c[i] << " ";
    }
}
