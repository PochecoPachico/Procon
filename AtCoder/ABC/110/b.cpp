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
    int N, M, X, Y; cin >> N >> M >> X >> Y;
    vector<int> x(N), y(M);
    REP(i, N) cin >> x[i];
    x.push_back(X);
    REP(i, M) cin >> y[i];
    y.push_back(Y);
    ASC(x); ASC(y);
    if (x[N] >= y[0]) cout << "War" << endl;
    else cout << "No War" << endl;
}
