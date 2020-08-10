#include<bits/stdc++.h>
using namespace std;
int n , k , a[1000001];
void init(){
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	sort(a+1 , a+1+n);
}
int res(){
	for(int i = n ; i >= 1 ; i--){
		if(a[i] <= k) return i;
	}
	return -1;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
        cout << res() << endl;
	}
}
