#include <iostream>

using namespace std;

int main() {
  char S[100000];
  int length, count = 0;
  for (length = 0; cin >> S[length]; length++);
  
  for (int i = 0; i < length - 1; i++)
    if (S[i] != S[i + 1]) count++;

  printf("%d",count);
}
