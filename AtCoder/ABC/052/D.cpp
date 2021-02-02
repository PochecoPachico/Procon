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

// 数値の大きさに気をつけろ!!
int main() {
  int N, A, B; 
  ll X, result = 0;
  cin >> N >> A >> B >> X;
  for (int i = 1; i < N; i++) {
    ll nextX;
    cin >> nextX;
    if ((nextX - X) * A > B) result += B;
    else result += (nextX - X) * A;
    X = nextX;
  }
  cout << result << endl;
}
