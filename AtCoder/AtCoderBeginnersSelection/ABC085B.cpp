/*
 * なぜかsort + unique + eraseだとWAだったのでsetを使いました
 * ちなみにvectorで確保された配列は0で初期化されるっぽいので、uniqueを使うと0が入る
 */


#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

#define FOR(i, a, b) for(int i = (a); i<(b); i++)
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
  int N;
  set<int> d;
  cin >> N;

  int temp;
  REP(i, N) {
    cin >> temp;
    d.insert(temp);
  } 
  cout << d.size() << endl;
}
