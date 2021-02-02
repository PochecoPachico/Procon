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
    vector<vector<int>> c(10, vector<int>(10, 0));
    FOR(i, 1, n + 1) {
        vector<int> d;
        int nn = i;
        while(nn) {
            d.push_back(nn % 10);
            nn /= 10;
        }
        int a = d[0], b = d.back();
        c[a][b]++;
    }
    int ans = 0;
    FOR (i, 1, 10) {
        FOR (k, 1, 10) {
            ans += c[i][k] * c[k][i];
        }
    }
    cout << ans << endl;
}