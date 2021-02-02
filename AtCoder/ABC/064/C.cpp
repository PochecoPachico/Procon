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
  int N, sum = 0;
  int a[100], table[9] = {0};

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  
  for (int i = 0; i < N; i++) {
    if (a[i] >= 1 && a[i] <= 399) table[0]++;
    if (a[i] >= 400 && a[i] <= 799) table[1]++;
    if (a[i] >= 800 && a[i] <= 1199) table[2]++;
    if (a[i] >= 1200 && a[i] <= 1599) table[3]++;
    if (a[i] >= 1600 && a[i] <= 1999) table[4]++;
    if (a[i] >= 2000 && a[i] <= 2399) table[5]++;
    if (a[i] >= 2400 && a[i] <= 2799) table[6]++;
    if (a[i] >= 2800 && a[i] <= 3199) table[7]++;
    if (a[i] >= 3200) table[8]++;
  }

  for (int i = 0; i < 8; i++) {
    if (table[i] > 0) sum++;
  }
  int max = sum + table[8];
  int min = sum > 0 ? sum : 1;
  cout << min << " " << max << endl;
  return 0;
}
