#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	string s;
	cin >> T;
	while(T--){
		cin >> s;
		int a[257];
		for(int i = 0 ; i < 257 ; i++) a[i] = 0;
		for(int i = 0 ; i < s.length() ; i++) a[s[i]]++;
		sort(a , a + 257);
		int max = a[256];
		int n = s.length();
		if(n % 2 == 0){ // n chan
			if(max <= n / 2) cout << "1\n"; else if(max > n / 2) cout << "-1\n";
		} else {
			if(max <= (n / 2) + 1) cout << "1\n"; else if(max > (n / 2) + 1) cout << "-1\n";
		}
	}
}

