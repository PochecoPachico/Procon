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

int main() {
    cin >> n >> m;
    ll dp[100001] = {0};
    // 配列の全要素の初期化
    int a[100001] = {0};
    dp[0] = 1;
    REP(i, m) { 
        int tmp; cin >> tmp;
        a[tmp] = 1;
    }
    REP(i, n) {
        if (a[i + 1] == 0) dp[i + 1] += dp[i];
        dp[i + 1] %= MOD;
        if (a[i + 2] == 0) dp[i + 2] += dp[i];
        dp[i + 2] %= MOD;
    }
    cout << dp[n] << endl;
}
