#include<bits/stdc++.h>
using namespace std;
int m , n , k;
int a[1000001];
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> m >> n >> k;
		for(int i = 1 ; i <= n + m ; i++) cin >> a[i];
		sort(a + 1 , a + 1 + n + m);
		cout << a[k] << endl;
	}
}

