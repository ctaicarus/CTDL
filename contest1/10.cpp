#include<bits/stdc++.h>
using namespace std;

// bit cua gray o vi tri i = bcd[i-1] xor bcd[i]
// gray[i] = bcd[i-1] xor bcd[i]

int main(){
	int T;
	cin >> T;
	while(T--){
		string s;
		cin >> s;
		int n = s.length();
		int a[n] , b[n];
		a[0] = 0;
		for(int i = 1 ; i <= n ; i++){
			a[i] = s[i-1] - '0';
		}
		for(int i = 1 ; i <= n ; i++){
			b[i] = a[i-1] xor a[i];
			cout << b[i];
		}
		cout << endl;
		
	}
}

