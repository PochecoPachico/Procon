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
    vector<int> a(3);

    REP(i, 3) cin >> a[i];
    DESC(a);

    int ans = a[0] - a[1];

    if (a[0] % 2 != (a[2] + ans) % 2) {
        ans += 1 + (a[0] - (a[2] + ans) + 2 - 1) / 2;
    } else {
        ans += (a[0] - (a[2] + ans) + 2 - 1) / 2;
    }
    cout << ans << endl;
}
