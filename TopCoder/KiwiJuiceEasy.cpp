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

class  KiwiJuiceEasy {
    public:
        vector<int> thePouring(vector<int> capacities, vector<int> bottles, vector<int> fromId, vector<int> toId) {
            REP(i, fromId.size()) {
                int t = toId[i];
                int f = fromId[i];
                int space = capacities[t] - bottles[t];
                if (space >= bottles[f]) {
                    bottles[t] += bottles[f];
                    bottles[f] = 0;
                } else {
                    bottles[t] = space;
                    bottles[f] -= space;
                }
            }
            return bottles;
        }
};
