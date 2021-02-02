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
  int N, K, min = 1000000000, min_index = -1;
  int A[100000];

  cin >> N >> K;
  for(int i = 0; i < N; i++) {
    cin >> A[i];
    if(A[i] == K) {
      cout << "POSSIBLE" <<endl;
      return 0;
    }
    if(min > A[i]){
      min = A[i];
      min_index = i;
    } 
  }
  
  for(int i = 0; i < N; i++) {
    if(i == min_index) continue;
    if(A[i] % min != 0) {
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
  return 0;
}
