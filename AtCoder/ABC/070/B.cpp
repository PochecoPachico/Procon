#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  // 重ならない場合
  if (B <= C || D <= A) {
    cout << 0 << endl;
    return 0;
  }
  cout << min(B, D) - max(A, C) << endl;
  // 一行で行ける
  // cout << max(min(B, D) - max(A, C), 0) << endl;
  return 0;
}
