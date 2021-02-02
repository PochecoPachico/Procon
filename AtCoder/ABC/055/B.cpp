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
  int N;
  ll result = 1; 
  cin >> N;
  
  for (int i = 1; i <= N; i++)
    result = (result * i) % MOD;

  cout << result % MOD << endl;
  return 0;
}
