#include<bits/stdc++.h>
using namespace std;
int n , k;
void res(){
	cin >> n >> k;
	if(9 * k < n) cout << -1 ;
	else {
		int d = n / 9 , m = n % 9;
		if(m == 0){
			k = k - d + 1;
			if(k > 1){
				cout << 1;
				for(int i = 1 ; i < k - 1 ; i++) cout << 0;
				cout << 8;
			}
			else cout << 9;
			for(int i = 1 ; i < d ; i++) cout << 9;
		}
		else {
			k -= d;
			if(k > 1) cout << 1;
			for(int i = 1 ; i < k-1 ; i++) cout << 0;
			if(k > 1) cout << m-1; else cout << m;
			for(int i = 1 ; i <= d ; i++) cout << 9;
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		res();
		cout << endl;
	}
}

