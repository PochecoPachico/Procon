#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>
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
    int n, m; cin >> n >> m;
    vector<int> s(m), c(m);
    REP(i, m) { 
        cin >> s[i] >> c[i];
        s[i]--;
    }

    int ans = -1;
    FOR(i, 0, 1000) {
        string st = to_string(i);

        if (st.size() != n) continue;

        bool f = true;
        FOR(k, 0, m){
            if (c[k] != st[s[k]] - '0') { 
                f = false;
                break;
            }
        }
        if (f) { 
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
