#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
  int N, x = 0, max = 0;
  string S;
  cin >> N >> S;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'I') x++;
    else x--;
    if (x > max) max = x;
  }
  cout << max << endl;
}
