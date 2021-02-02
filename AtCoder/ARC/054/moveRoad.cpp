#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int L, X, Y, S, D;
	cin >> L >> X >> Y >> S >> D;
	int total;
	double time_right, time_left;

	if(S == D )  {
		printf("0\n");
	}
	if( S < D ) total = D - S;
	else total = ( L - S ) + D;
	time_right = (double) total / ( X + Y );

	if( S < D ) total = ( L - D ) + S;
	else total = S - D;
	if( X > Y ) time_left = (double) total / ( X - Y );
	else time_left = (double) total / ( Y - X);

	if(time_left > time_right) printf("%.10lf\n",time_right);
	if(time_left <= time_right) printf("%.10lf\n",time_left);

	return 0;
}
