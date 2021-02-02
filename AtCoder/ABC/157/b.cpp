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
    vector<vector<int> > a(4, vector<int>(4));
    vector<vector<int> > t(4, vector<int>(4, 0));

    FOR(i, 1, 4) {
        FOR(k, 1, 4) cin >> a[i][k];
    }

    int n; cin >> n;
    REP(_, n) {
        int b; cin >> b;
        FOR(i, 1, 4) FOR(k, 1, 4) if (a[i][k] == b) t[i][k] = 1;
    }
    if (t[1][1] + t[1][2] + t[1][3] == 3
        || t[2][1] + t[2][2] + t[2][3] == 3
        || t[3][1] + t[3][2] + t[3][3] == 3

        || t[1][1] + t[2][1] + t[3][1] == 3
        || t[1][2] + t[2][2] + t[3][2] == 3
        || t[1][3] + t[2][3] + t[3][3] == 3

        || t[1][1] + t[2][2] + t[3][3] == 3
        || t[1][3] + t[2][2] + t[3][1] == 3) cout << "Yes" << endl;
    else cout << "No" << endl;

}
