#include<bits/stdc++.h>
using namespace std;
int n;

bool check(int n){
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0) return false;
	}
	return true;
}
int MAX(int n){
	int ans = n;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0) ans = min(ans , max(i , n/i));
	}
	return ans;
}

int res(int n){
	int d = 0;
	while(n != 1){
		if(check(n)){
			n--;
			d++;
		} else {
			d++;
			n = MAX(n);
		}
	}
	return d;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   cin >> n;
	   cout << res(n) << endl;
	}
}

