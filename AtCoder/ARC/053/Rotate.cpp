#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){
	map<char, int> mp;
	char c;
	int min = 0;

	while(cin >> c){
		if(mp.find(c) != mp.end()){
			mp[c]++;
		}else{
			mp[c] = 1;
		}
	}
	
}
