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
  int a[100001];

  cin >> N;
  for(int i = 1; i < N + 1; i++)
    cin >> a[i];

  int count = 0, next = 1;
  for(int i = 0; i < N; i++) {
    if(a[next] == 2) {
      cout << count + 1 << endl;
      return 0;
    }
    next = a[next];
    count++;
  }
  cout << -1 << endl;
}
