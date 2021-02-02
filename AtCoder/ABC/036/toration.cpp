#include <cstdio>
#include <iostream>

int main(){
	int box;
	std::cin >> box;
	char boxes[box][box];

	for(int i = 0; i < box;i++){
		for(int j = 0; j < box; j++){
			std::cin >> boxes[i][j];
		}
	}

	for(int i = 0; i < box;i++){
		for(int j = box-1; j >= 0; j--){
			printf("%c",boxes[j][i]);
		}
		printf("\n");
	}
	return 0;
}


