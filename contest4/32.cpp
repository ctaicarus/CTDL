#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1000001];
int res(){
	int d = 0;
	for(int i = 1 ; i <= n ; i++){
		for(int j = i + 1 ; j <= n ; j++){
			if(a[i] > a[j]) d++;
		}
	}
	return d;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		for(int i = 1 ; i <= n ; i++) cin >> a[i];
		cout << res() << endl;
	}
}

