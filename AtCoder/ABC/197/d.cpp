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
#define PI 3.14159265359

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
    double n; cin >> n;
    double x0, y0; cin >> x0 >> y0;
    double xo, yo; cin >> xo >> yo;

    double cx = abs(x0 + xo) / 2, cy = abs(y0 + yo) / 2;
    double r = sqrt(pow((x0 - xo), 2) + pow((y0 - yo), 2)) / 2;
    
    double rad = atan2(y0 - cy, x0 - cx) + ((2 * PI) / n);

    double ans_x = r * cos(rad) + cx;
    double ans_y = r * sin(rad) + cy;

    cout << ans_x << " " << ans_y << endl;
}
