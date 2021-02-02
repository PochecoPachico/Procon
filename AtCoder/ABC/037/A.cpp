#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int A,B,C;
	int total = 0;
	int result = 0;
	cin >> A >> B >> C;
	if(A > B){
		while(total <= C){
			result++;
			total += result*B;
		}
		if(C - total > A) result++;
	}else{
		while(total <= C){
			result++;
			total += result*A;
		}
		if(C - total > B) result++;
	}
	printf("%d",result);
}
