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
    int w, h, x, y; cin >> w >> h >> x >> y;
    double a1 = min(abs(w - x), x) * h;
    double a2 = min(abs(h - y), y) * w;
    double a3 = 0, a4 = 0;
    if (h / w == (w - x) / (h - y)) {
        a3 = w * h / 2;
    }
    if ()
    if (a1 == a2) {
        printf("%lf %d\n", a1, 1);
    } else {
        printf("%lf %d\n", max(a1, a2), 0);
    }
}
