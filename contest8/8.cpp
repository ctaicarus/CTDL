#include<bits/stdc++.h>
using namespace std;
int n;
bool ok;
void init(){
	ok = false;
	cin >> n;
}
void res(int s){
	if(s % n == 0) {
		cout << s << endl;
		ok = true;
		return;
	}
	for(int i = 0 ; i <= 1 ; i++){
		if(ok) break;
		res(s * 10 + i);
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res(1);
	}
}

