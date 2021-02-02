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
  int N, K;
  int x[100];
  cin >> N >> K;
  for (int i = 0; i < N; i++)
    cin >> x[i];

  int result = 0;
  for (int i = 0; i < N; i++) {
    result += min(x[i], abs(x[i] - K)) * 2;
  }
  cout << result << endl;
}
