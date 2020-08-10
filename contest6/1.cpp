#include<bits/stdc++.h>
using namespace std;
long long n, a[10000];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	sort(a+1,a+1+n);
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		for(int i = 1; i <= n/2 ; i++){
			cout << a[n-i+1] << " " << a[i] << " ";
		}
		if(n % 2 == 1 ) cout << a[n/2+1];
		cout << endl;
	}
}

