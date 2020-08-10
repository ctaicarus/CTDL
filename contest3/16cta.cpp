#include<bits/stdc++.h>
using namespace std;
int sum , n;
void init(){
	cin >> sum >> n;
}
void res(){
	if(n*9 < sum) cout << '-1';
	else{
		int k = sum/9 , d = sum % 9; // so so 9 , so du
		if(d == 0){
			if(k <= 1){
				cout << "1";
				for(int i = 1 ; i <= n-2 ; i++) cout << "0";
				cout << "8";
			}
			else {
				cout << "1";
				for(int i = 1 ; i <= n-1-k ; i++) cout << "0";
				cout << "8";
				for(int i = 1 ; i <= k-1 ; i++) cout << "9" ;
			}
		}
		else {
			if(k < 1){
				cout << "1";
				for(int i = 1 ; i <= n-2 ; i++) cout << "0";
				cout << d-1;
			} else
			if(k < n-1 && k >= 1){
				cout << "1";
				for(int i = 1 ; i <= n-2-k ; i++) cout << "0";
				cout << d;
				cout << "8";
				for(int i = 1 ; i <= k-1 ; i++) cout << "9" ;				
			} else
			if(k == n-1){
				cout << d;
				for(int i = 1 ; i <= k ; i++) cout << "9";
			}
		}
	}
}
int main(){
	int T; cin >> T;
	while(T--){
		init();
		res();
		cout << endl;
	}
}
