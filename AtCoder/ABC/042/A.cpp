#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int A;
	int count_5=0, count_7=0;
	for(int i = 0; i < 3; i++){
		cin >> A;
		switch(A){
			case 5:
				count_5++;
				break;
			case 7:
				count_7++;
				break;
			default:
				break;
		}
	}
	if(count_7 == 1 && count_5 == 2) printf("YES");
	else printf("NO");
	return 0;
}
