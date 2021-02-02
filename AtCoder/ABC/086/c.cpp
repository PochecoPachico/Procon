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

int dist(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
} 

int main() {
    int n; cin >> n;
    vector<int> t(n + 1), x(n + 1), y(n + 1);
    REP(i, n) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

    t[0] = 0; x[0] = 0; y[0] = 0;
    FOR(i, 1, n + 1) {
        int tmp = (t[i] - t[i - 1]) - dist(x[i - 1], y[i - 1], x[i], y[i]);
        if (tmp % 2 == 1 || tmp < 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
