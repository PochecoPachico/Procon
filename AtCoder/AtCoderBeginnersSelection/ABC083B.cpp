// 読み間違えでちょっと詰まった
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
  int N, A, B;
  int ans = 0;
  cin >> N >> A >> B;

  for (int i = 1; i <= N; i++) {
    int temp[5];
    int sum = 0;
    temp[0] = (i / 10000);
    temp[1] = (i / 1000) - (temp[0] * 10);
    temp[2] = (i / 100)  - (temp[0] * 100) - (temp[1] * 10);
    temp[3] = (i / 10)  - (temp[0] * 1000) - (temp[1] * 100) - (temp[2] * 10);
    temp[4] = i - (temp[0] * 10000) - (temp[1] * 1000) - (temp[2] * 100) - (temp[3] * 10);
    for (int k = 0; k < 5; k++) sum += temp[k];
    if (A <= sum && sum <= B) {
      ans += i;
    }
  }
  cout << ans << endl;
}
