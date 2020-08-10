#include<bits/stdc++.h>
using namespace std;
int s , n;
void init(){
	cin >> s >> n;
}
// 2 5
// 6 3 4 2 
int res(){
	int d = 0;
	if(s > n) return s - n;
	while(n > s){
		if(n % 2 == 0){
			d = d + 1;
			n/=2;
		} else {
			n = n + 1;
			d = d + 1;
		}
	}
	return d + s - n;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	    cout << res() << endl;
	}
}

