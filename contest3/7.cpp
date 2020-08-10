#include<bits/stdc++.h>
using namespace std;
long long res(long long a[] , long long b[] , int n){
	long long sum = 0;
	sort(a , a + n);
	sort(b , b + n);
	for(int i = 0 ; i < n ; i++) {
		sum += (a[i] * b[n - i - 1]);
	}
	return sum;
}
int main(){
	int T , n;
	cin >> T;
	long long *a , *b;
	while(T--){
		cin >> n;
		a = new long long[n];
		b = new long long[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		for(int i = 0 ; i < n ; i++) cin >> b[i];
		cout << res(a , b , n) << endl;
		delete a ;
		delete b ;
	}
}


