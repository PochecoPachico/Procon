#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
  int K, S;
  int ans = 0;
  cin >> K >> S;
  
  for (int x = 0; x <= K; x++) {
    for (int y = 0; y <= K; y++) {
      int z = S - x - y;
      if (z >= 0 && z <= K) ans++; 
    }
  }

  cout << ans << endl;
}
