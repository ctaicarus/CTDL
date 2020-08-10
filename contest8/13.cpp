#include<bits/stdc++.h>
using namespace std;
int n , k;
bool khacnhau(int n){
	bool a[10];
	for(int i = 0 ; i < 10 ; i++) a[i] = false;
	while(n){
		int x = n % 10;
		if(x > 5) return false;
		if(a[x]) return false; else a[x] = true;
		n /= 10;
	}
	return true;
}
void res(){
	int d = 0;
	for(int i = n ; i <= k ; i++){
		if(khacnhau(i)) d++;
	}
	cout << d << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   cin >> n >> k;
	   res();
	}
}

