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
  int a[100000];
  int ans = 0;
  cin >> N;

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a, a + N);
  for(int i = 0; i < N; ) {
    int tmp = a[i];
    int cnt = 0;
    for(int k = 0; ; k++) {
      if(a[i + k] == tmp) {
        cnt++;
      } else {
        break;
      }
    }
    if(tmp > cnt) {
      ans += cnt;
    } else if(tmp < cnt) {
      ans += (cnt - tmp);
    }
    i += cnt;
  }
  cout << ans << endl;
}
