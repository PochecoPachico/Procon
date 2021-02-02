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
    vector<int> v(n);
    REP(i, n) v[i] = i + 1;
    vector<int> p(n), q(n);
    REP(i, n) cin >> p[i];
    REP(i, n) cin >> q[i];

    int count = 0, p_i, q_i;
    do {
        count++;
        bool f = true;

        for (int i = 0; i < n; i++)
            if (p[i] != v[i]) {
                f = false;
                break;
            }
        if (f) p_i = count;

        f = true;
        for (int i = 0; i < n; i++)
            if (q[i] != v[i]) {
                f = false;
                break;
            }
        if (f) q_i = count;

    } while(next_permutation(v.begin(), v.end()));
    cout << abs(p_i - q_i) << endl;
}
