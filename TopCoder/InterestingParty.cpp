#include <iostream>
#include <map>
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

class InterestingParty {
    public:
        int bestInvitation(vector<string> first, vector<string> second) {
            int ans = 1;
            FOR(i, 0, first.size()) {
                int f = 0;
                int s = 0;
                FOR(k, 0, first.size()) {
                    if (first[i] == first[k]) f++;
                    if (first[i] == second[k]) f++;
                    if (second[i] == first[k]) s++;
                    if (second[i] == second[k]) s++;
                }
                ans = max(ans, f);
                ans = max(ans, s);
            }
            return ans;
        }
};
