#include<bits/stdc++.h>
using namespace std;
long long n , l , r;
long long s;
void init(){
	cin >> n >> l >> r;
	s = 0;
}

long long res(long long n){
	if(n == 0 || n == 1) return s += 0;
	if(n > 2) return  s = s + res(n/2) + res(n % 2) + res(n/2);
}

int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		res(n);
		cout << s << endl;
	}
}

