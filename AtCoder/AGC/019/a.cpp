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
    ll q, h, s, d; cin >> q >> h >> s >> d;
    ll n; cin >> n;

    ll ans = 0;
    ll p_f = min(2 * q, h);
    ll one = min(p_f * 2, s);

    if (n % 2 != 0) {
        ans += one;
        n -= 1;
    }
    ans += min(2 * one * (n / 2), d * (n / 2));
    cout << ans << endl;
}
