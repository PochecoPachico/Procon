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
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    
    bool inc = false, desc = false;
    int ans = 1;
    if (a[0] > a[1]) desc = true;
    else inc = true;
    FOR(i, 2, n) {
        if (inc) {
            if (a[i - 1] > a[i]) {
                ans++;
                inc = false;
            }
        } else if (desc) {
            if (a[i - 1] < a[i]) {
                ans++;
                desc = false;
            }
        } else if (!inc && !desc) {
            if (a[i - 1] < a[i]) inc = true;
            if (a[i - 1] > a[i]) desc = true;
        }
    }

    cout << ans << endl;
}
