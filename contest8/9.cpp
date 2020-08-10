#include<bits/stdc++.h>
using namespace std;
int s , n , ans ;
void init(){
	cin >> s >> n;
}
void Try(int d , int Sum){
	if(Sum == n) {
		ans = min(ans , d);
	}
	if(Sum <= 0) return;
	if(d >= ans && Sum != n) return;
	for(int i = 0 ; i <= 1 ; i++){
		if(i == 0) Try(d+1 , Sum * 2);
		if(i == 1) Try(d+1 , Sum - 1);
	}
}
int MIN(){
	int d = 0;
	int a = s;
	while(a <= n){
		a = a * 2;
		d++;
	}
	while(a != n){
		a--;
		d++;
	}
	return d;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   ans = MIN();
	   Try(0 , s);
	   cout << ans << endl;
	}
}

