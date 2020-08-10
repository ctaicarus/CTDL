#include<bits/stdc++.h>
using namespace std;
int n , k , a[11][11] , b[11] , c[11] , d = 0; // c la mang check , b la mang hoan vi
string s;
void res(){
	int t = 0;
	for(int i = 1 ; i <= n ; i++){
		t = t + a[i][b[i]];
	}
	if(t == k) {
		d++;
		for(int i = 1 ; i <= n ; i++){
			char x = b[i] + '0';
			s = s + x;  
		}
		s = s + ' ';
	}
}

void step(int i){
	if(i>n) res();
	for(int j = 1 ; j <= n ; j++)
	if(c[j] == 0) {
		c[j] = 1;
		b[i] = j;
		step(i+1);
		c[j] = 0;
	}
} 
int main(){
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++){
		c[i] = 0;
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j];
		}
	}
	step(1);
	cout << d << endl;
	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] != ' ') cout << s[i] << " "; else cout << endl;
	}
}
