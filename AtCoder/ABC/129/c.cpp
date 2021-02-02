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

int n, m;
int a[100000] = {-1};
int memo[101] = {false};

int dfs(int stage) {
    // if (memo[stage]) return 0;
    // memo[stage] = true;
    if (stage == n) return 1;
    if (stage > n) return 0;
    REP(i, m) if (stage == a[i]) return 0;
    return dfs(1 + stage) + dfs(2 + stage);
}
int main() {
    cin >> n >> m;
    REP(i, m) cin >> a[i];
    cout << dfs(0) % MOD << endl;
}
