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

class InterestingDigits {
    public:
        vector<int> digits(int base) {
            vector<int> ans;
            FOR(n, 2, base) {
                bool f = true;
                REP(i, base) {
                    REP(k, base) {
                        REP(l, base) {
                            if (((i * base * base + k * base + l) % n == 0) &&  ((i + k + l) % n != 0)) {
                                f = false;
                                break;
                            }
                        }
                        if (!f) break;
                    }
                    if (!f) break;
                }
                if (f) ans.push_back(n);
            }
            return ans;
        }
};
