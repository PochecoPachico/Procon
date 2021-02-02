#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
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

vector<int> x(10), y(10);

int main() {
    int n; cin >> n;
    vector<int> v(n);
    REP(i, n) { 
        cin >> x[i] >> y[i];
        v[i] = i + 1;
    }
    double ans = 0;
    int f = 0;
    do {
        for (int i = 0; i < n - 1; i++) { 
            ans += pow(pow(x[v[i] - 1] - x[v[i + 1] - 1], 2) + pow(y[v[i] - 1] - y[v[i + 1] - 1], 2), 0.5);
        }
        f++;
    } while (next_permutation(v.begin(), v.end()));
    cout << setprecision(10) << ans / f << endl;
}
