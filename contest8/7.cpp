#include<bits/stdc++.h>
using namespace std;
int n , d ;
bool ok;
void init(){
	cin >> n;
	d = 0;
	ok = false;
}
void Try(int s){
	if(s <= n) d++;
	if(s > n) {
		ok = true;
		return ;
	}
	for(int i = 0 ; i <= 1 ; i++){
		if(ok) break;
		if(s * 10 + i <= n) Try(s * 10 + i);
	}
}

int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   Try(1);
	   cout << d << endl;
	}
}

