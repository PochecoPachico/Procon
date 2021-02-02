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
    int n; ll k; cin >> n >> k;
    vector<ll> s(n + 1);
    s[0] = 0;
    FOR(i, 1, n + 1) {
        int a; cin >> a;
        s[i] = s[i - 1] + a;
    }
    ll ans = 0;
    int r = 0;
    REP(i, n + 1) {
        FOR(j, r, n + 1) {
            ll sum = s[j] - s[i];
            if (sum >= k) {
                ans += n - j + 1;
                r = j;
                break;
            }
        }
    }
    cout << ans << endl;
}
