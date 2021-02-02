#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1, str2;
  cin >> str1 >> str2;
  char s = str2[0];
  printf("A%cC", s);
}
