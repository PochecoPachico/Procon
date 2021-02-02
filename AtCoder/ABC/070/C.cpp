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

int GCD(int a, int b) {
  if (b == 0) return a;
  return GCD(b, a % b);
}

int LCM(int a, int b) {
  return (a * b) / GCD(a, b);
}

int solve(int *T, int N) {
  if (N == 1)
    return LCM(T, N - 1);
  else
    return 
}

int main() {
  int N;
  int T[100];
  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> T[i];

  int tmp = GCD(T[i], T[i + 1]);
  for (int i = 0; i <= N; i++) {
    tmp = GCD(T[i], T[i + 1]);
  }
}
