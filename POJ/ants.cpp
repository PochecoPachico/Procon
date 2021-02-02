#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<ll, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> d_d;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
	int L, n, N;
	int ants[1000000];
	cin >> N;
	for (int j = 0; j < N; j++) {
		int maxT = 0, minT = 0;
		cin >> L >> n;
		for (int i = 0; i < n; i++)
			cin >> ants[i];

		for (int i = 0; i < n; i++) {
			minT = max(minT, min(ants[i], L - ants[i]));
			maxT = max(maxT, max(ants[i], L - ants[i]));
		}

		printf("%d %d\n", minT, maxT);
	}
	return 0;
}
