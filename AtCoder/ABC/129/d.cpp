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
int u[2000][2000] = {0}, d[2000][2000] = {0}, r[2000][2000] = {0}, l[2000][2000] = {0};

int main() {
    int h, w; cin >> h >> w;
    char s[2000][2000];

    for (int i = 0; i < h; i++) {
        for (int k = 0; k < w; k++) {
            cin >> s[i][k];
            if (s[i][k] == '#') {
                u[i][k] = 0; l[i][k] = 0;
            } else {
                if (i == 0) u[i][k] = 1;
                else u[i][k] = 1 + u[i - 1][k]; 
                if (k == 0) l[i][k] = 1;
                else l[i][k] = 1 + l[i][k - 1]; 
            }
        }
    }

    for (int i = h - 1; i >= 0; i--) {
        for (int k = w - 1; k >= 0; k--) {
            if (s[i][k] == '#') {
                d[i][k] = 0; r[i][k] = 0;
            } else {
                if (i == h - 1) d[i][k] = 1;
                else d[i][k] = 1 + d[i + 1][k]; 
                if (k == w - 1) r[i][k] = 1;
                else r[i][k] = 1 + r[i][k + 1]; 
            }
        }
    }

    int ans = 0;
    REP(i, h) {
        REP(k, w) {
            ans = max(u[i][k] + d[i][k] + r[i][k] + l[i][k] - 3, ans);
        }
    }
    cout << ans << endl;
}
