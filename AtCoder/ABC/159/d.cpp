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

ll aC2(ll a) {
    return (a * (a - 1)) / 2;
} 

int main() {
    int n; cin >> n;
    vector<ll> a(n, 0);
    vector<ll> c(n + 1, 0);
    REP(i, n) { 
        cin >> a[i]; c[a[i]]++;
    }

    ll ans = 0;
    FOR(i, 1, n + 1) {
        ans += aC2(c[i]);
    }
    
    REP(k, n) {
        cout << ans - aC2(c[a[k]]) + aC2(c[a[k]] - 1) << endl;
    } 
}
