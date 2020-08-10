#include<bits/stdc++.h>
using namespace std;
int n , a[1000];
int res(){
	int ans = a[1];
	for(int i = 1 ; i <= n ; i++){
		int s = a[i];
		for(int j = i+1 ; j <= n ; j++){
			s = s + a[j];
			ans = max(ans , s);
		}
	}
	return ans;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n ;
		for(int i = 1 ; i <= n ; i++) cin >> a[i];
		cout << res() << endl;
	}
}

