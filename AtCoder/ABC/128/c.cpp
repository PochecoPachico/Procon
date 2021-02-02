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

int n, m;
vector<vector<int>> sw(10, vector<int>(10));
vector<int> p;

int dfs(int sw) {
    if (sw == n) {
        // 全部店頭しているかチェック
    }
}
int main() {
    cin >> n >> m;
    REP(i, m) {
        int k; cin >> k;
        REP(j, k) {
            int tmp; cin >> tmp;
            sw[tmp][i] = 1;
        }
    }
    REP(i, m) cin >> p[i];

    cout << dfs(0) << endl;
}
