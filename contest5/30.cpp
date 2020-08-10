#include<bits/stdc++.h>
using namespace std;
int n , d[101] , m;
bool ok;
int ans;
void init(){
	for(int i = 1 ; i <= 100 ; i++) d[i] = i;
}
void Try(int s , int d){
	if(s == n){
	//	ok = true;
	    ans = min(ans , d);
    //    cout << d << endl;
		return;
	}
	for(int i = m ; i >= 1 ; i--){
	//	if(ok) break;
		if(i*i + s <= n && d <= n)Try(s + i*i , d + 1);
	}
}
int main(){
	int T;
	cin >> T;
	init();
	while(T--){
		cin >> n;
		ok = false;
		ans = INT_MAX;
		m = sqrt(n);
		Try(0 , 0);
		cout << ans << endl;
	}
}

