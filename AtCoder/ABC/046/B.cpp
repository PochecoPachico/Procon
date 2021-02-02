#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int result = K;
  for (int i = 1; i < N; i++) result = result * (K - 1);
  cout << result << endl;
}
