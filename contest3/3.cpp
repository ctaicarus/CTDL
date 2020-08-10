#include<bits/stdc++.h>
#define MAX 1000000007
using namespace std;

long long n , *a;
long long res(){
	sort(a , a + n);
	long long sum = 0;
	for(int i = 0 ; i < n ; i++){
		sum = sum + a[i] * i;
		sum = sum % MAX;
	}
	return sum;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		a = new long long[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		cout << res() << endl;
	}
}


