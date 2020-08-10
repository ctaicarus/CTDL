#include<bits/stdc++.h>
using namespace std;
void res(){
	int n , kt = 1;
	cin >> n;
	int d = n / 7 , m = n % 7;
	if(m == 0) for(int i = 1 ; i <= d ; i++) { cout << 7 ; kt = 0; }
	else if(n == 4) cout << 4;
	else {
		while(d){
			if(m % 4 == 0){
				kt = 0;
				for(int i = 1 ; i <= m/4 ; i++) cout << 4;
				for(int i = 1 ; i <= d ; i++) cout << 7;
				break;
			} else {
				d--;
				m += 7;
			}
		}
	}
	if(kt) cout << -1;
	
}
int main(){
	int T;
	cin >> T;
	while(T--){
		res();
		cout << endl;
	}
}

