#include<bits/stdc++.h>
using namespace std;
int n , k , a[20] , b[20] , ok = 1 ; // b la mang nhi phan
void next( ){ // sinh xau
	int i = n - 1;
	while(i >= 0 && b[i] != 1){
		b[i] = 1;
		i--;
	}
	if(i >= 0) b[i] = 0 ; else ok = 0; 
}
bool check( ){
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		sum = sum + b[i] * a[i];
	}
	if(sum == k) return true; else return false;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			b[i] = 1;
		}
		ok = 1;
		sort(a  , a + n);
		int c = 0;
		while(ok){
			next();
			if(check()) {
				c = 1;
				cout << "[";
				for(int j = 0 ; j < n ; j++){
					if(b[j] == 1) {
			            cout << a[j] << " ";
					}
				}
				cout << "] ";
			}
		}
		if(c == 0) cout << "-1";
		cout << endl;
	}
}
