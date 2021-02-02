#include <cstdio>
#include <iostream>

int main(){
	int A, B;
	int boxes;
	std::cin >> A >> B;
	boxes = B / A;
	if(B % A != 0) boxes++;
	printf("%d",boxes);
	return 0;
}

