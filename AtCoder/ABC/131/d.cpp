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
    vector<pair<int, int>> t;
    REP(i, n) {
        int a, b; cin >> a >> b;
        t.push_back(make_pair(b, a));
    }
    ASC(t);
    int sum = 0;
    string ans = "Yes";
    for (auto e: t) {
        sum += e.second;
        if (sum > e.first) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
}
