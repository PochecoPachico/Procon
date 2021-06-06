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

ll dp[31][31];

string solve(int a, int b, ll k) {
    if (a == 0) 
        return string(b, 'b');
    if (b == 0)
        return string(a, 'a');
    if (k <= dp[a - 1][b])
        return string("a") + solve(a - 1, b, k);
    else
        return string("b") + solve(a, b - 1, k - dp[a - 1][b]);

}

int main() {
    int a, b; cin >> a >> b;
    ll k; cin >> k;
    dp[0][0] = 1;

    for (int i = 0; i <= a; i++) {
        for (int k = 0; k <= b; k++) {
            if (i > 0) {
                dp[i][k] += dp[i - 1][k];
            }
            if (k > 0) {
                dp[i][k] += dp[i][k - 1];
            }
        }
    }
    cout << solve(a, b, k) << endl;
}
