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
    int n, y; cin >> n >> y;   

    int a, b = 0, c = 0;
    bool f = false;
    while (b <= n) {
        c = 0;
        while (b + c <= n) { 
            if (5000 * b + 9000 * c == 10000 * n - y) { 
                f = true;
                break;
            }
            c++;
        }
        if (f) break;
        b++;
    }
    if (!f) {
        cout << -1 << " " << -1 << " " << -1 << endl;
        return 0;
    }
    a = n - (b + c);

    cout << a << " " << b << " " << c << endl;
}
