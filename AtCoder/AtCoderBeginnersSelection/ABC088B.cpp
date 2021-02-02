#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())

#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define DEBUG(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
  int N;
  vector<int> a(100);

  cin >> N;
  REP(i, N) {
    cin >> a[i];
  } 
  sort(a.begin(), a.end(), greater<int>());
  int alice = 0, bob = 0;
  FOR(i, 0, N) {
    if (i % 2 == 0) alice += a[i];
    else bob += a[i];
  }
  cout << alice - bob << endl;
}
