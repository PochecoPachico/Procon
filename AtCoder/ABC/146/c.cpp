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

ll a, b;

int d(ll n) {
    return to_string(n).size();
}

ll cost(ll n) {
    return a * n + b * d(n);
}

int main() {
    ll x; cin >> a >> b >> x;

    ll n = 1000000000;
    if (cost(n) <= x) {
        cout << n << endl;
        return 0;
    }
    ll l = 0, h = 1000000001;
    while(h - l > 1) {
        ll mid = (l + h) / 2;
        if (cost(mid) <= x) l = mid;
        else h = mid;
    }
    cout << l << endl;
}
