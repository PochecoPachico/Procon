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

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<pair<ll, ll>> prime_factorize(ll n) {
    vector<pair<ll, ll>> res;
    for (ll p = 2; p * p <= n; p++) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) {
            num++;
            n /= p;
        }
        res.push_back(make_pair(p, num));
    }

    if (n != 1)res.push_back(make_pair(n, 1)); 
    return res;
}

int main() {
    ll a, b; cin >> a >> b;
    ll g = gcd(a, b);
    auto v = prime_factorize(g);
    for(auto e: v)  {
        DEBUG(e.first);
        DEBUG(e.second);
    }
    cout << v.size() + 1 << endl;
}
