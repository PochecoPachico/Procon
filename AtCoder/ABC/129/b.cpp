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
    vector<int> sw(n + 1);
    sw[0] = 0;
    FOR(i, 1, n + 1) {
        int s; cin >> s;
        sw[i] += sw[i - 1] + s;
    }
    
    int ans = 1000000;
    REP(i, n) {
        if (ans > abs(sw[i] - (sw[n] - sw[i]))) ans = abs(sw[i] - (sw[n] - sw[i]));
    }
    cout << ans << endl;
}
