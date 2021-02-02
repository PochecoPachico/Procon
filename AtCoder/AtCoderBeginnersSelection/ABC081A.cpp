// 楽勝です
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
  char s[3];
  for (int i = 0; i < 3; i++) cin >> s[i];

  int count = 0;
  for (int i = 0; i < 3; i++) {
    if (s[i] == '1') count++;
  } 
  cout << count << endl;
}
