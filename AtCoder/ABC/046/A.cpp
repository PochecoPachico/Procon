#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  int count = 0;
  cin >> a >> b >> c;
  if (a == b) count++;
  if (b == c) count++;
  if (a == c) count++;
  if (count == 3) count--;
  cout << 3 - count << endl;
}
