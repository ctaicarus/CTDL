#include<bits/stdc++.h>
using namespace std;
int n , a[30];
int res(){
	sort(a , a + n);
	int sum1 = 0 , sum2 = 0;
	for(int i = 0 ; i < n ; i++){
		if(i % 2 == 0){
			sum1 = sum1 * 10 + a[i];
		} else sum2 = sum2 * 10 + a[i];
	}
	return abs(sum1 + sum2);
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		cout << res() << endl;
	}
}

