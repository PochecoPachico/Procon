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
  int a[100000];
  cin >> N;
  for(int i = 0; i < N; i++)
    cin >> a[i];
  
  int count_4 = 0;
  int count_odd = 0;
  int count_even = 0;

  for(int i = 0; i < N; i++) {
    if(a[i] % 4 == 0) {
      count_4++;
      continue;
    }
    if(a[i] % 2 == 1) count_odd++;
    else count_even++;
  }


  if(count_even == 0) {
     if(count_4 >= count_odd - 1) {
      cout << "Yes" << endl;
      return 0;
    }
    cout << "No" << endl;   
    return 0;
  }
  if(N - count_even % 2 == 0) {
    if(count_4 >= count_odd) {
      cout << "Yes" << endl;
      return 0;
    }
    cout << "No" << endl;
    return 0;
  } else {
   if(count_4 >= count_odd) {
      cout << "Yes" << endl;
      return 0;
    }
    cout << "No" << endl;
  }

  return 0;
}
