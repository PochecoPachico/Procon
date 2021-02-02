#include <iostream>
#include <cstdio>

using namespace std;

void sort(int *array, int num){
	for(int i = 0; i < num - 1; i++){
		for(int j = i + 1; j < num; j++){
			if(array[i] < array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main(){
	int N, result = 0;
	int L[200];
	cin >> N;
	for(int i = 0; i < 2 * N; i++)
		cin >> L[i];
	sort(L,2*N);

	for(int i = 0; 2*i + 1 <= 2*N; ++i){
		result += L[2*i + 1];
	}
	printf("%d\n",result);
	return 0;
}
