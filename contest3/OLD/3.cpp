#include<bits/stdc++.h>
using namespace std;
int n , k , a[100];
int res(){
	int sum1 = 0 , sum2 = 0;
	sort(a , a + n);
	for(int i = 0 ; i < k ; i++) sum1 = sum1 + a[i];
	for(int i = k ; i < n ; i++) sum2 = sum2 + a[i];
	return abs(sum1 - sum2);
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		cout << res() << endl;
	}
}

