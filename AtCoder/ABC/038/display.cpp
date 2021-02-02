#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int H[2], W[2];
	for(int i = 0; i < 2; i++)
		cin >> H[i] >> W[i];
		
	if((H[0] == H[1]) || (H[0] == W[1]) || (W[0] == H[1]) || (W[0] == W[1]))printf("YES\n");
	else printf("NO\n");

	return 0;
}
