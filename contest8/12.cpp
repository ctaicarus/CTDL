#include<bits/stdc++.h>
using namespace std;
int n , ans;
string s[1000001], a , b;
bool c[1000001];
void init(){
	cin >> n >> a >> b;
	for(int i = 1 ; i <= n ; i++){
		cin >> s[i];
		c[i] = true;
		if(s[i] == a) c[i] = false;
	}
	ans = INT_MAX;
}
bool check(string a , string b){
	int d = 0;
	for(int i = 0 ; i < a.length() ; i++){
		if(a[i] != b[i]) d++;
	}
	if(d == 1) return true; else return false;
}
void res(int d , string a){
//	cout << a << " ";
	if(a == b) {
		ans = min(ans , d);
		return;
	}
	for(int i = 1 ; i <= n ; i++){
		if(c[i] && check(a , s[i])) {
			c[i] = false;
			res(d+1 , s[i]);
			c[i] = true;
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res(1 , a);
	   cout << ans << endl;
	}
}

