#include<bits/stdc++.h>
using namespace std;
int n , k , a[10001];
int ans;
bool ok;
void init(){
	cin >> n >> k;
	ok = false;
	ans = INT_MAX;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	sort(a , a+n);
}
void Try(int i , int s , int d){
	if(d > ans) return;
	if(s == k) {
		ok = true;
		ans = min(ans , d);
	} else {
		for(int j = i ; j < n ; j++){
			if(s + a[j] <= k){
				Try(j+1 , s + a[j] , d+1);
			}
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		Try(0,0,0);
		if(!ok) cout << "-1\n" ; else cout << ans << endl;
	}
}
