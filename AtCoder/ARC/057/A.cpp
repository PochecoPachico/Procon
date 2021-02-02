#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	int A, K, i = 0;
	double result = 0, lim = 2 * pow(10,12);
	cin >> A >> K;
	result = A;
	while (result < lim){
		result += 1 + K * result;
		i++;
		printf("%f\n",result);
	}
	printf("%d\n",i);
}
