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
    int h, n; cin >> h >> n;
    vector<int> a(n), b(n);
    REP(i, n) cin >> a[i] >> b[i];
    vector<vector<ll> > dp(n + 1, vector<ll>(h + 1, 1000000000));

    dp[0][0] = 0;
    REP(i, n) {
        REP(k, h + 1) {
            dp[i + 1][k] = min(dp[i + 1][k], dp[i][k]);
            dp[i + 1][min(k + a[i], h)] = min(dp[i + 1][min(k + a[i], h)], dp[i + 1][k] + b[i]);
        }
    }
    
    cout << dp[n][h] << endl;
}
