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
  int A[3][101];

  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[1][i];
  for (int i = 1; i <= N; i++) cin >> A[2][i];
  
  int maximum = 0;
  for (int i = 1; i <= N; i++) {
    int sum = 0;
    for (int k = 1; k <= i; k++) {
      sum += A[1][k];
    }
    for (int k = i; k <= N; k++) {
      sum += A[2][k];
    }
    if (maximum < sum) maximum = sum;
  }
  cout << maximum << endl;
}
