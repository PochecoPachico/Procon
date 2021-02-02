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
    int n, l; cin >> n >> l;
    int mn = 200000, mn_idx = -1;
    FOR (i, 1, n + 1) {
        if (abs((l - 1) + i) < mn) {
            mn = abs((l - 1) + i);
            mn_idx = i;
        }
    }
    cout << (n - 1) * (l - 1) + ((((n + 1) * n) / 2) - mn_idx) << endl;
}
