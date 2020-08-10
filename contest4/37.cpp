#include<bits/stdc++.h>
using namespace std;
long long n , k;
long long a[1000001];
long long res(){
	if(a[1] > k) return -1; 
	if(a[1] == k) return a[1];
	for(int i = 2 ; i <= n ; i++){
		if(a[i] > k) return i-1;
		if(a[i] == k) return i;
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		for(int i = 1 ; i <= n ; i++) cin >> a[i];
		cout << res() << endl;
	}
}

