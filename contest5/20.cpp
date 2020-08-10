#include<bits/stdc++.h>
using namespace std;
long long res , n ;
string s;
void init(){
	cin >> s;
	n = s.length();
	res = 0;
}
long long ans(){
	for(int i = 1 ; i <= n ; i++){ // so ki tu cua xau con
		for(int j = 0 ; j <= n - i ; j++){ // ki tu bat dau
		    long long x = 0;
			for(int z = j ; z <= j + i - 1 ; z++){ // lap i ki tu
				x = x * 10 + s[z] - '0';
			}
			res = res + x;
		}
	}
	return res;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << ans() << endl;
	}
}

