#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000001];

void snt(){
	for(int i = 1 ; i <= 1000000 ; i++) a[i] = 1;
	for(int i = 2 ; i <= 1000000 ; i++){
		if(a[i] == 1) {
			for(int j = 2 ; i * j <= 1000000 ; j++) a[i*j] = 0;
		}
	}
}

int MAX(int n){
	int ans = n;
	for(int i = 2 ; i <= sqrt(n) + 1 ; i++){
		if(n % i == 0) ans = min(ans , max(i , n/i));
	}
	return ans;
}

int res(int n){
	int d = 0;
	while(n != 1){
		if(a[n] == 1){
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
	snt();
	while(T--){
	   cin >> n;
	   cout << res(n) << endl;
	}
}

