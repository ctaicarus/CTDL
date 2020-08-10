#include<bits/stdc++.h>
using namespace std;
int min(int n){
	int res = 0;
	int p = 0;
	while(n != 0){
		int x = n % 10;
		if(x == 6) {
			x = 5;
			res = x * pow(10 , p) + res;
		} else res = x * pow(10 , p) + res;
		p++;
		n /= 10;
	}
	return res;
}
int max(int n){
	int res = 0;
	int p = 0;
	while(n != 0){
		int x = n % 10;
		if(x == 5) {
			x = 6;
			res = x * pow(10 , p) + res;
		} else res = x * pow(10 , p) + res;
		p++;
		n /= 10;
	}
	return res;
}
int main(){
	int n , m;
	cin >> n >> m;
	cout << min(n) + min(m) << " "<< max(n) + max(m);
}

