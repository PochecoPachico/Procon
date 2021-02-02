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
    vector<int> a(n);
    vector<ll> ans(n);
    ll sum = 0;
    REP(i, n)  { 
        cin >> a[i];
        sum += a[i];
    }

    ans[0] = sum;
    for(int i = 1; i < n; i += 2) {
        ans[0] -= 2 * a[i];
    }

    FOR(i, 1, n) {
        ans[i] = 2 * a[i - 1] - ans[i - 1];
    }
    
    for(auto e: ans) {
        printf("%lld ", e);
    }
}