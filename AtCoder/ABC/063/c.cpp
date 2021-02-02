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
    int ans = 0;
    vector<int> s(n);
    REP(i, n) { 
        int tmp; cin >> tmp;
        s[i] = tmp;
        ans += tmp;
    }
    
    ASC(s);
    REP(i, n) {
        if (s[i] % 10 == 0) continue;
        if (ans % 10 == 0)  {
            ans -= s[i];
            break;
        }
    }
    if (ans % 10 == 0) ans = 0;
    cout << ans << endl;
}
