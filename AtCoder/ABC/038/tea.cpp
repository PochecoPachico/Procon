#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	string str;
	cin >> str;
	if(str.back() == 'T') printf("YES\n");
	else printf("NO\n");
	return 0;
}
