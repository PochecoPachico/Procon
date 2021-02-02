// 読み間違えで配列のサイズの確保でミス
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
  int N;
  int a[200];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> a[i];

  int count = 0;
  while(1) {
    for (int i = 0; i < N; i++) {
      if (a[i] % 2 == 0) {
        a[i] = a[i] / 2;
      } else {
        cout << count << endl;
        return 0;
      }
    }
    count++;
  }
  return 0;
}
