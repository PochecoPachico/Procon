#include <iostream>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

// 素因数分解
// 因数, 個数のmapを返す
map<int, int> prime_factorization(int N) {
  map<int, int> mp;
  int n = N;
  if (n == 1) {
    mp[n]++;
  }

  // 2で割り切れるだけわる
  while (n != 1 && n % 2 == 0) {
    mp[2]++;
    n /= 2;
  }

  for (int i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      mp[i]++;
      n /= i;
    }
  }
  if (n != 1) mp[n]++;
  
  return mp;
}

int main() {
  map<int, int> mp;
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    map<int, int> returned_map;
    returned_map = prime_factorization(i);
    for (auto p: returned_map) {
      mp[p.first] += p.second;
    }
  }
  ll result = 1;
  for (auto p: mp) {
    if (p.first == 1) continue;
    result = result % MOD * (p.second + 1);
  } 
  // 最後を割るのを忘れずに!!
  cout << result % MOD  << endl;
}
