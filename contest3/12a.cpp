#include<bits/stdc++.h>
using namespace std;
string s ;
int a[257];
int check(){
	cin >> s;
	for(int i = 0 ; i < 257 ; i++) a[i] = 0;
	for(int i = 0 ; i < s.length() ; i++) a[s[i]]++;
	sort(a , a + 123);
	int max = a[122];
	int d = 0;
	for(int i = 121 ; i >= 97 ; i--){
		d = d + a[i];
		if(d >= max){
			return 1;
		}
	}
	return -1;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cout << check() << endl;
		
	}
}

