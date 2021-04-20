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
    vector<ll> a(n); REP(i, n) cin >> a[i];

    ll ans = 2000000000;

    for (int bit = 0; bit < (1 << (n - 1)); bit++) {
        ll or_ = 0, xor_ = 0;
        for (int i = 0; i <= n; i++) {
            if (i < n) or_ |= a[i];
            if ((bit >> i) & 1 || n == i) {
                xor_ ^= or_;
                or_ = 0;
            }
        }
        ans = min(ans, xor_);
    }
    cout << ans << endl;
}
